"""
Generate machine readable JSON referring to the SPIR-V specification.
@PENGUINLIONG
"""
from html.parser import HTMLParser
import json
from collections import defaultdict
import re
import os
from typing import List

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
            out["SeeExtensions"] = [line[len("See extension "):].strip()]
        elif line.startswith("See extensions "):
            out["SeeExtensions"] = [x.strip() for x in line[len("See extensions "):].split(",")]
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
            out["MissingBefore"] = line[len("Missing before version "):-1]
        elif line.startswith("Missing after version ") and line.endswith("."):
            out["MissingAfter"] = line[len("Missing after version "):-1]
        elif line.startswith("Also see extension: "):
            out["SeeExtensions"] = [line[len("Also see extension: "):].strip()]
        elif line.startswith("Also see extensions: "):
            out["SeeExtensions"] = split_and_strip(',', line[len("Also see extensions: "):])
        else:
            out["EnablingCapabilities"] = split_and_strip(',', line)
    return out

def title_keep_upper(txt) -> str:
    if len(txt) == 0 or txt[0].isupper():
        return txt
    out = ""
    for i, c in enumerate(txt):
        out += c.upper() if i == 0 else c
    return out
def decompose_operand_list(operand_ty, operand_desc) -> dict:
    # Extract the repeating units in type specifications. This is the
    # referential operand count.
    segs = split_and_strip(',', operand_ty)
    raw_segs = segs
    assert segs[-1] == '\u2026', "a operand listing must end with \\u2026"
    assert (len(segs) - 1) % 2 == 0, "a operand listing should have a length of multiple of two"
    segs = segs[:(len(segs) - 1) // 2]
    if operand_desc == None:
        # There is no description for the operand list.
        out = []
        for seg in segs:
            out += [{
                "Type": title_keep_upper(seg),
                "Listed": True,
            }]
        return out

    out = []
    # Now extract the descriptions. There are various ways a listed operand
    # being described. We will deal with each case respectively.
    desc_segs = split_and_strip(',', operand_desc)
    if desc_segs[-1] == '\u2026':
        desc_segs = desc_segs[:-1]
    if len(desc_segs) > 1:
        if any(c.isdigit() for c in desc_segs[0]):
            # The description enumerates the operand list by an ordinate number,
            # like `Operand 1, Operand 2, \u2026` in `OpExtInst`.
            order = next(c for c in desc_segs[0] if c.isdigit())
            next_order = str(int(order) + 1)
            if desc_segs[0].replace(order, next_order).lower() == desc_segs[1].lower():
                desc = desc_segs[0].replace(f" {order}", "")
                assert desc_segs[0] != desc, "ordinate number ellimination seems failed"
                for seg in segs:
                    out += [{
                        "Type": title_keep_upper(segs[0]),
                        "Description": desc,
                        "Listed": True,
                    }]
                return out
        if len(desc_segs) == len(raw_segs) - 1:
            # Each of the description matches with the type specification in the
            # same segment position, like `Variable, Parent, \u2026` in `OpPhi`.
            for ty, desc in zip(segs, desc_segs):
                out += [{
                    "Type": title_keep_upper(ty),
                    "Description": desc,
                    "Listed": True
                }]
            return out
    if len(desc_segs) == 1 and operand_desc[-1] != '\u2026':
        desc = desc_segs[0]
        if desc.startswith("See "):
            # Special cases for variadic instructions, like `See Decoration.` in
            # `OpDecoration`. Simply ignore the descripiton because it's a
            # phrase rather than a noun.
            for seg in segs:
                out += [{
                    "Type": title_keep_upper(seg),
                    "Description": desc,
                    "Listed": True,
                }]
            return out
        else:
            # In this case the description describe the sequence as a whole,
            # like `Indexes` in `OpAccessChain`. Also special case like
            # `literal, label <id>, literal, label <id>, \u2026` in `OpSwitch`.
            for seg in segs:
                out += [{
                    "Type": title_keep_upper(seg),
                    "Description": desc,
                    "Listed": True,
                }]
        return out

    raise RuntimeError("unrecognized operand list pattern")

def decompose_operand(operand) -> List[dict]:
    optional = False
    # Not using `startwith` because of `OpDecorateString`.
    if "Optional" in operand:
        optional = True
        operand = operand.replace("Optional", "")

    lines = split_and_strip('\n', operand)

    # Concatenate multi-line operand list description. See `OpSwitch`.
    lines2 = [""]
    for seg in lines:
        lines2[-1] += seg
        lines2[-1] += " "
        if not seg.endswith(','):
            lines2 += [""]
    assert lines2[-1] == ""
    lines = [x.strip() for x in lines2[:-1]]

    assert len(lines) <= 2, f"unexpected operand description row {lines}"
    if ',' in lines[0]:
        desc = lines[1] if len(lines) == 2 else None
        listed_operands = decompose_operand_list(lines[0], desc)
        return listed_operands
    else:
        out = {}
        is_listed = False
        if lines[0] == "Literals":
            out["Type"] = "Literal"
            is_listed = True
        else:
            out["Type"] = lines[0]
        if len(lines) == 2:
            out["Description"] = lines[1]
        if is_listed:
            out["Listed"] = True
        elif optional:
            out["Optional"] = optional
        return [out]

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
                    extra += operand
            elem = decompose_item_desc(row[1])
            if len(extra) > 0:
                elem["ExtraOperands"] = extra
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
            if len(row) == 1:
                # Special case of 'Magic Number'.
                elem = { "Value": row[0] }
                out += [elem]
            elif len(row) == 2:
                elem = decompose_item_desc(row[1])
                elem["Value"] = row[0]
                out += [elem]
            else:
                raise RuntimeError("unexpected row pattern")
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
        out_operands += operand

    elem["MinWordCount"] = int(min_word_count)
    if variable_word_count:
        elem["VariableWordCount"] = variable_word_count
    elem["Opcode"] = int(opcode)
    if len(out_operands) > 0:
        elem["Operands"] = out_operands
    return elem

ENUMERATIONS = []
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
                        enum = table2enum(self.enum_parser, last_subsec)
                        elem = {
                            "Name": key,
                            "Cases": enum,
                        }
                        ENUMERATIONS += [elem]
                        self.enum_parser = None

SpirvSpecParser().feed(spec)

def get_git_head():
    if os.path.exists(".git/HEAD"):
        with open(".git/HEAD") as f:
            line = f.readline()
            if line.startswith("ref: "):
                ref = line[len("ref: "):].strip()
                if os.path.exists(f".git/{ref}"):
                    with open(f".git/{ref}") as f:
                        return f.readline().strip()
            else:
                ref = line

INSTRUCTIONS = [{ "Name": k, "Instructions": v } for k, v in INSTRUCTIONS.items()]
out_json = {
    "Generator": {
        "Name": "PENGUINLIONG/tinyspv",
        "ScriptName": __file__.replace('\\', '/').split('/')[-1],
        "GitCommitHash": get_git_head(),
    },
    "Enumerations": ENUMERATIONS,
    "InstructionClasses": INSTRUCTIONS,
}

with open("specs/unified1/SPIRV.json", "w") as f:
    json.dump(out_json, f, indent=4)
    f.write("\n")
