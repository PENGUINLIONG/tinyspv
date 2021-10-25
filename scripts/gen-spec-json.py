"""
Generate machine readable JSON referring to the SPIR-V specification.
@PENGUINLIONG
"""
from html.parser import HTMLParser
import json
from collections import defaultdict
import re

with open("specs/unified1/SPIRV.html") as f:
    spec = f.read()

class HeadlineParser:
    def __init__(self):
        self.should_update_cur_sec = False
        self.should_update_cur_subsec = False
        self.should_update_cur_subsubsec = False
        self.cur_sec = ""
        self.cur_subsec = ""
        self.cur_subsubsec = ""

        self.gather_text = None


    def handle_starttag(self, tag, attrs):
        if tag == "h2" or tag == "h3" or tag == "h4":
            self.gather_text = ""
    def handle_data(self, data):
        if self.gather_text != None:
            self.gather_text += data
    def handle_endtag(self, tag):
        if tag == "h2":
            self.cur_sec = self.gather_text.strip()
            self.cur_subsec = "" # Invalidate lower level of headline.
            self.cur_subsubsec = "" # Invalidate lower level of headline.
            self.gather_text = None
            print((self.cur_sec))
        elif tag == "h3":
            self.cur_subsec = self.gather_text.strip()
            self.cur_subsubsec = "" # Invalidate lower level of headline.
            self.gather_text = None
            print(" ", (self.cur_subsec))
        elif tag == "h4":
            self.cur_subsubsec = self.gather_text.strip()
            self.gather_text = None
            print("   ", (self.cur_subsubsec))
    def get_triplet(self):
        return (self.cur_sec, self.cur_subsec, self.cur_subsubsec)

class TableParser:
    def __init__(self):
        self.should_update_col_defs = False
        self.should_update_rows = False
        self.col_defs = []
        self.rows = []

        self.gather_text = ""

    def handle_starttag(self, tag, attrs):
        if tag == "thead":
            self.should_update_col_defs = True
        elif tag == "tbody":
            self.should_update_rows = True
        elif tag == "tr" and self.should_update_rows:
            self.rows += [[]]
        elif tag == "td" and self.should_update_rows:
            colspan = int(attrs["colspan"]) if "colspan" in attrs else 1
            self.rows[-1] += [""] * (colspan - 1)
            self.gather_text = ""
        elif tag == "th" and self.should_update_col_defs:
            colspan = int(attrs["colspan"]) if "colspan" in attrs else 1
            self.col_defs += [""] * (colspan - 1)
            self.gather_text = ""
    def handle_data(self, data):
        self.gather_text += data
    def handle_endtag(self, tag):
        if tag == "thead":
            self.should_update_col_defs = False
        elif tag == "tbody":
            self.should_update_rows = False
        elif tag == "th" and self.should_update_col_defs:
            self.col_defs += [self.gather_text.strip()]
        elif tag == "td" and self.should_update_rows:
            self.rows[-1] += [self.gather_text.strip()]

def decompose_enabling_capabilities(cap):
    segs = [x.strip() for x in cap.split('\n')]
    out_caps = []
    out_reserved = False
    out_miss_before = ""
    out_miss_after = ""
    out_exts = []

    if len(segs) > 0:
        out_caps = [x.strip() for x in segs[0].split(',')]
    # Remove trailing empty extra operands.
    while len(out_caps) > 0 and len(out_caps[-1]) == 0:
        del out_caps[-1]
    for seg in segs[1:]:
        if seg == "":
            pass
        elif seg == "Reserved.":
            out_reserved = True
        elif seg.startswith("Missing before version ") and seg.endswith("."):
            out_miss_before = seg[len("Missing before version "):-1]
        elif seg.startswith("Missing after version ") and seg.endswith("."):
            out_miss_after = seg[len("Missing after version "):-1]
        elif seg.startswith("Also see extension: "):
            out_exts = [x.strip() for x in seg[len("Also see extension: "):].split(',')]
        elif seg.startswith("Also see extensions: "):
            out_exts = [x.strip() for x in seg[len("Also see extensions: "):].split(',')]
        else:
            raise RuntimeError(f"unknown capability pattern: {seg}")
    return (out_caps, out_reserved, out_miss_before, out_miss_after, out_exts)

def table2enum(table: TableParser, subsec):
    out = []
    ncol_def = len(table.col_defs)

    # Some enumerations are not literals but are referred to by result IDs
    # so there might be a '<id>' suffix at the end of `subsec`. Be aware of
    # this, we don't use `endswith` here.
    assert table.col_defs[0] in subsec, \
        "subsection headline mismatch with the first column header of the enumeration table"
    # Keep the order, the checks on `ncol_def` shold be done in descending
    # order.
    if ncol_def >= 3:
        assert table.col_defs[1] == "Extra Operands", \
            "column 2 must be the extra operands"
        assert table.col_defs[2] == "Enabling Capabilities", \
            "column 3 must be the enabling capabilities"
        for row in table.rows:
            assert len(row) >= ncol_def
            name, desc = tuple((row[1] + "\n").split("\n", maxsplit=1))
            extra = row[2:-1]
            # Remove trailing empty extra operands.
            while len(extra) > 0 and len(extra[-1]) == 0:
                del extra[-1]
            caps, reserved, miss_before, miss_after, exts = decompose_enabling_capabilities(row[-1])
            elem = {
                "Name": name.strip(),
                "Description": desc.strip(),
                table.col_defs[1]: extra,
                table.col_defs[2]: caps,
                "Reserved": reserved,
                "Missing Before": miss_before,
                "Missing After": miss_after,
                "See Extensions": exts,
                "Value": row[0],
            }
            out += [elem]
    elif ncol_def >= 2:
        # General cases for other literal number specifications.
        for row in table.rows:
            assert len(row) == ncol_def + 1
            name, desc = tuple((row[1] + "\n").split("\n", maxsplit=1))
            assert table.col_defs[1] == "Enabling Capabilities" or \
                table.col_defs[1] == "Implicitly Declares", \
                "unsupported capability column"
            caps, reserved, miss_before, miss_after, exts = decompose_enabling_capabilities(row[2])
            elem = {
                "Name": name.strip(),
                "Description": desc.strip(),
                table.col_defs[1]: caps,
                "Reserved": reserved,
                "Missing Before": miss_before,
                "Missing After": miss_after,
                "See Extensions": exts,
                "Value": row[0]
            }
            out += [elem]
    elif ncol_def >= 1:
        for row in table.rows:
            offset = len(row) - ncol_def
            assert offset <= 1
            elem = dict(zip(table.col_defs, row[offset:]))
            if offset == 1:
                # Special case of 'Magic Number'.
                elem["Value"] = row[0]
            out += [elem]
    else:
        raise RuntimeError("unsupported column pattern")
    return out

def decompose_instr_desc(desc):
    segs = desc.split('\n')
    out_desc = []
    out_exts = []
    for seg in segs:
        if seg.startswith("See extension "):
            out_exts = [x.strip() for x in seg[len("See extension "):].split(",")]
        elif seg.startswith("See extensions "):
            out_exts = [x.strip() for x in seg[len("See extensions "):].split(",")]
        else:
            # There might be other descriptions but these are safe to ignore.
            out_desc += [seg]
    out_desc = '\n'.join(out_desc)
    return (out_desc, out_exts)

def table2instr(table: TableParser, subsubsec):
    assert len(table.rows) == 2, \
        "instruction specification must have two rows"

    first_row = table.rows[0]
    name, desc = tuple(x.strip() for x in first_row[0].split("\n", maxsplit=1))
    cap = first_row[1] if len(first_row) > 1 else ""
    if cap.startswith("Capability:"):
        cap = cap[len("Capability:"):]
    cap = cap.strip()
    caps, reserved, miss_before, miss_after, _ = decompose_enabling_capabilities(cap)
    desc, exts = decompose_instr_desc(desc)

    second_row = table.rows[1]
    word_count = second_row[0]
    if word_count.endswith(" + variable"):
        variable_word_count = True
        min_word_count = word_count[:-len(" + variable")]
    else:
        variable_word_count = False
        min_word_count = word_count
    opcode = second_row[1]
    out_operands = []
    for operand in second_row[2:]:
        segs = [x.strip() for x in operand.split("\n")]
        if segs[0].startswith("Optional"):
            optional = True
            del segs[0]
        else:
            optional = False

        # Concatenate multi-line operand list description. See `OpSwitch`.
        segs2 = [""]
        for seg in segs:
            segs2[-1] += seg
            segs2[-1] += " "
            if not seg.endswith(','):
                segs2 += [""]
        assert segs2[-1] == ""
        segs = segs2[:-1]

        assert len(segs) <= 2, f"unexpected operand description row {segs}"
        ty = segs[0]
        desc2 = segs[1] if len(segs) == 2 else ""
        out_operands += [{ "Type": ty.strip(), "Description": desc2.strip(), "Optional": optional }]

    m = re.match(r"(\w+) *(?:\(((?:\w+,? *)+)\))?", name)
    assert m, f"invalid op name pattern {name}"
    name = m[1]
    aliases = [] if m[2] == None else m[2].split(",")

    return {
        "Name": name,
        "Aliases": aliases,
        "Description": desc,
        "Enabling Capabilities": caps,
        "Reserved": reserved,
        "Missing Before": miss_before,
        "Missing After": miss_after,
        "See Extensions": exts,
        "Min Word Count": int(min_word_count),
        "Variable Word Count": variable_word_count,
        "Opcode": int(opcode),
        "Operands": out_operands,
    }


ENUMERATIONS = {}
INSTRUCTIONS = defaultdict(list)
class SpirvSpecParser(HTMLParser):
    def __init__(self):
        super().__init__()
        self.headline_parser = HeadlineParser()
        self.enum_parser = None
        self.instr_parser = None
    def handle_starttag(self, tag, attrs):
        self.headline_parser.handle_starttag(tag, attrs)

        if self.headline_parser.cur_sec.endswith("Binary Form"):
            if self.headline_parser.cur_subsec.endswith("Instructions"):
                # Switch to new instruction. Unlike other enumerations,
                # instruction are grouped in instruction classes and the
                # instructions are not led by headlines.
                # We also check whether `last_subsubsec` is empty because there
                # is a sample `table` above any of the `h4`s and `table`s
                # which are real instructions specifications.
                if tag == "table" and len(self.headline_parser.cur_subsubsec) > 0:
                    # Ignore info boxes which are implemented as `table`s.
                    attrs = dict(attrs)
                    if "class" in attrs and "tableblock" in attrs["class"]:
                        if self.instr_parser == None:
                            self.instr_parser = TableParser()
            else:
                if tag == "table" and len(self.headline_parser.cur_subsec) > 0:
                    # Ignore info boxes which are implemented as `table`s.
                    attrs = dict(attrs)
                    if "class" in attrs and "tableblock" in attrs["class"]:
                        if self.enum_parser == None:
                            self.enum_parser = TableParser()

        if self.enum_parser:
            self.enum_parser.handle_starttag(tag, attrs)
        if self.instr_parser:
            self.instr_parser.handle_starttag(tag, attrs)
    def handle_data(self, data):
        self.headline_parser.handle_data(data)
        if self.enum_parser:
            self.enum_parser.handle_data(data)
        if self.instr_parser:
            self.instr_parser.handle_data(data)
    def handle_endtag(self, tag):
        global ENUMERATIONS, INSTRUCTIONS

        last_sec = self.headline_parser.cur_sec
        last_subsec = self.headline_parser.cur_subsec
        last_subsubsec = self.headline_parser.cur_subsubsec
        self.headline_parser.handle_endtag(tag)

        if self.enum_parser:
            self.enum_parser.handle_endtag(tag)
        if self.instr_parser:
            self.instr_parser.handle_endtag(tag)

        if last_sec.endswith("Binary Form"):
            if last_subsec.endswith("Instructions"):
                # Switch to new instruction. Unlike other enumerations,
                # instruction are grouped in instruction classes and the
                # instructions are not led by headlines.
                # We also check whether `last_subsubsec` is empty because there
                # is a sample `table` above any of the `h4`s and `table`s
                # which are real instructions specifications.
                if tag == "table" and len(last_subsubsec) > 0:
                    if self.instr_parser != None:
                        key = last_subsubsec.split(' ', maxsplit=1)[1]
                        INSTRUCTIONS[key] += [table2instr(self.instr_parser, last_subsubsec)]
                        self.instr_parser = None
            else:
                # Switch to new enumeration.
                if tag == "table" and len(last_subsec) > 0:
                    # We only keep the last table.
                    if self.enum_parser != None:
                        key = last_subsec.split(' ', maxsplit=1)[1]
                        ENUMERATIONS[key] = table2enum(self.enum_parser, last_subsec)
                        self.enum_parser = None

SpirvSpecParser().feed(spec)

out_json = {
    "Enumerations": ENUMERATIONS,
    "Instructions": INSTRUCTIONS,
}

with open("specs/unified1/SPIRV.json", "w") as f:
    json.dump(out_json, f, indent=4)
    f.write("\n")
