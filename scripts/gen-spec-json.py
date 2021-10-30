"""
Generate machine readable JSON referring to the SPIR-V specification.
@PENGUINLIONG
"""
from html.parser import HTMLParser
import json
from collections import defaultdict
import re
from typing import Optional

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

def split_and_strip(sep, s):
    """
    Split input `s` by separator `sep`, strip each output segment with empty
    segment dropped.
    """
    return [y for y in (x.strip() for x in s.split(sep)) if len(y) > 0]

def decompose_item_desc(desc) -> dict:
    out = {}
    lines = split_and_strip('\n', desc)

    m = re.match(r"(\w+) *(?:\(((?:\w+,? *)+)\))?", lines[0])
    assert m, f"invalid op name pattern '{lines[0]}'"

    name = m[1]
    out["Name"] = name

    aliases = split_and_strip(',', m[2]) if m[2] != None else None
    if aliases:
        out["Aliases"] = aliases

    desc_lines = []
    for line in lines[1:]:
        if line.startswith("See extension "):
            out["See Extensions"] = [line[len("See extension "):].strip()]
        elif line.startswith("See extensions "):
            out["See Extensions"] = [x.strip() for x in line[len("See extensions "):].split(",")]
        else:
            # There might be other descriptions but these are safe to ignore.
            desc_lines += [line]
    if len(desc_lines) > 0:
        out["Description"] = '\n'.join(desc_lines)

    return out

def decompose_item_meta(meta) -> dict:
    lines = split_and_strip('\n', meta)
    out = {}

    for line in lines:
        if line == "Reserved.":
            out["Reserved"] = True
        elif line.startswith("Missing before version ") and line.endswith("."):
            out["Missing Before"] = line[len("Missing before version "):-1]
        elif line.startswith("Missing after version ") and line.endswith("."):
            out["Missing After"] = line[len("Missing after version "):-1]
        elif line.startswith("Also see extension: "):
            out["See Extensions"] = [line[len("Also see extension: "):].strip()]
        elif line.startswith("Also see extensions: "):
            out["See Extensions"] = split_and_strip(',', line[len("Also see extensions: "):])
        else:
            out["Enabling Capabilities"] = split_and_strip(',', line)
    return out

def decompose_operand(operand) -> dict:
    out = {}
    lines = split_and_strip('\n', operand)

    optional = False
    if lines[0].startswith("Optional"):
        optional = True
        del lines[0]

    # Concatenate multi-line operand list description. See `OpSwitch`.
    lines2 = [""]
    for seg in lines:
        lines2[-1] += seg
        lines2[-1] += " "
        if not seg.endswith(','):
            lines2 += [""]
    assert lines2[-1] == ""
    lines = lines2[:-1]

    assert len(lines) <= 2, f"unexpected operand description row {lines}"
    out["Type"] = lines[0].strip()
    if len(lines) == 2:
        out["Description"] = lines[1].strip()
    if optional:
        out["Optional"] = optional
    return out

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
            extra = []
            for operand in row[2:-1]:
                operand = operand.strip()
                # Ignore trailing empty extra operands.
                if len(operand) > 0:
                    operand = decompose_operand(operand)
                    extra += [operand]
            elem = decompose_item_desc(row[1])
            if len(extra) > 0:
                elem["Extra Operands"] = extra
            meta = decompose_item_meta(row[-1])
            elem.update(meta)
            elem["Value"] = row[0]
            out += [elem]
    elif ncol_def >= 2:
        def override_caps_en2imply(meta):
            """
            Override enabling capabilities to implicitly declares. This is used
            for the `Capability` enum.
            """
            out = {}
            for k, v in meta.items():
                if k == "Enabling Capabilities":
                    out["Implicitly Declares"] = v
                else:
                    out[k] = v
            return out

        # General cases for other literal number specifications.
        for row in table.rows:
            assert len(row) == ncol_def + 1
            assert table.col_defs[1] == "Enabling Capabilities" or \
                table.col_defs[1] == "Implicitly Declares", \
                "unsupported capability column"
            elem = decompose_item_desc(row[1])
            meta = decompose_item_meta(row[2])
            if table.col_defs[1] == "Implicitly Declares":
                meta = override_caps_en2imply(meta)
            elem.update(meta)
            elem["Value"] = row[0]
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

def table2instr(table: TableParser, subsubsec):
    assert len(table.rows) == 2, \
        "instruction specification must have two rows"

    first_row = table.rows[0]
    elem = decompose_item_desc(first_row[0])
    meta_txt = first_row[1] if len(first_row) > 1 else ""
    if meta_txt.startswith("Capability:"):
        meta_txt = meta_txt[len("Capability:"):]
    meta = decompose_item_meta(meta_txt)
    elem.update(meta)

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
        operand = decompose_operand(operand)
        out_operands += [operand]

    elem["Min Word Count"] = int(min_word_count)
    if variable_word_count:
        elem["Variable Word Count"] = variable_word_count
    elem["Opcode"] = int(opcode)
    if len(out_operands) > 0:
        elem["Operands"] = out_operands
    return elem

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
