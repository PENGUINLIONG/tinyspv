"""
Generate machine readable JSON referring to the SPIR-V specification.
@PENGUINLIONG
"""
from html.parser import HTMLParser
import json

with open("specs/unified1/SPIRV.html") as f:
    spec = f.read()

def decompose_headline(headline: str):
    parts =  headline.split('.', 4)
    npart = len(parts)
    if npart == 2:
        return (parts[0], None, None, parts[-1])
    elif npart == 3:
        return (parts[0], parts[1], None, parts[-1])
    elif npart == 4:
        return (parts[0], parts[1], parts[2], parts[-1])
    else:
        print(RuntimeError("unexpected headline format"))
        return (None, None, None, None)

class HeadlineParser:
    should_update_cur_sec = False
    should_update_cur_subsec = False
    should_update_cur_subsubsec = False
    cur_sec = ""
    cur_subsec = ""
    cur_subsubsec = ""

    gather_text = None
    def handle_starttag(self, tag, attrs):
        if tag == "h2" or tag == "h3" or tag == "h4":
            self.gather_text = ""
    def handle_data(self, data):
        if self.gather_text != None:
            self.gather_text += data
    def handle_endtag(self, tag):
        if tag == "h2":
            self.cur_sec = self.gather_text.strip()
            self.gather_text = None
            print((self.cur_sec))
        elif tag == "h3":
            self.cur_subsec = self.gather_text.strip()
            self.gather_text = None
            print(" ", (self.cur_subsec))
        elif tag == "h4":
            self.cur_subsubsec = self.gather_text.strip()
            self.gather_text = None
            print("   ", (self.cur_subsubsec))
    def get_triplet(self):
        return (self.cur_sec, self.cur_subsec, self.cur_subsubsec)

class OperandKindParser:
    def __init__(self, headline_parser):
        self.headline_parser = headline_parser
        
        self.should_update_column_defs = False
        self.should_update_rows = False
        self.column_defs = []
        self.rows = []

        self.gather_text = ""

    def handle_starttag(self, tag, attrs):
        if tag == "thead":
            self.should_update_column_defs = True
        elif tag == "tbody":
            # The table used to describe literals must have headers. This deals
            # with info/warning boxes in the text.
            self.should_update_rows = len(self.column_defs) > 0
        elif tag == "tr" and self.should_update_rows:
            self.rows += [[]]
        elif tag == "td" or tag == "th":
            self.gather_text = ""
    def handle_data(self, data):
        self.gather_text += data
    def handle_endtag(self, tag):
        if tag == "thead":
            self.should_update_column_defs = False
        elif tag == "tbody":
            self.should_update_rows = False
        elif tag == "th" and self.should_update_column_defs:
            self.column_defs += [self.gather_text.strip()]
        elif tag == "td" and self.should_update_rows:
            self.rows[-1] += [self.gather_text.strip()]
    def to_struct(self, subsec):
        out = []
        ncol_def = len(self.column_defs)

        # Some enumerations are not literals but are referred to by result IDs
        # so there might be a '<id>' suffix at the end of `subsec`. Be aware of
        # this, we don't use `endswith` here.
        assert self.column_defs[0] in subsec, \
            "subsection headline mismatch with the first column header of the enumeration table"
        # Keep the order, the checks on `ncol_def` shold be done in descending
        # order.
        if ncol_def >= 3:
            assert self.column_defs[1] == "Extra Operands", \
                "column 2 must be the extra operands"
            assert self.column_defs[2] == "Enabling Capabilities", \
                "column 3 must be the enabling capabilities"
            for row in self.rows:
                assert len(row) >= ncol_def
                # If the extra operand is empty, just remove it.
                if len(row[2]) == 0:
                    del row[2]
                elem = {
                    self.column_defs[0]: row[1],
                    self.column_defs[1]: row[2:-1],
                    self.column_defs[2]: row[-1],
                    "Value": row[0]
                }
                out += [elem]
        elif ncol_def >= 2:
            # General cases for other literal number specifications.
            for row in self.rows:
                assert len(row) == ncol_def + 1
                elem = dict(zip(["Value"] + self.column_defs, row))
                out += [elem]
        elif ncol_def >= 1:
            for row in self.rows:
                offset = len(row) - ncol_def
                assert offset <= 1
                elem = dict(zip(self.column_defs, row[offset:]))
                if offset == 1:
                    # Special case of 'Magic Number'.
                    elem["Value"] = row[0]
                out += [elem]
        else:
            raise RuntimeError("unsupported column pattern")
        return out

ENUMERATIONS = {}
class SpirvSpecParser(HTMLParser):
    def __init__(self):
        super().__init__()
        self.headline_parser = HeadlineParser()
        self.operand_kind_parser = None
    def handle_starttag(self, tag, attrs):
        self.headline_parser.handle_starttag(tag, attrs)
        if self.operand_kind_parser:
            self.operand_kind_parser.handle_starttag(tag, attrs)
    def handle_data(self, data):
        self.headline_parser.handle_data(data)
        if self.operand_kind_parser:
            self.operand_kind_parser.handle_data(data)
    def handle_endtag(self, tag):
        global ENUMERATIONS

        last_subsec = self.headline_parser.cur_subsec
        self.headline_parser.handle_endtag(tag)
        cur_sec = self.headline_parser.cur_sec
        cur_subsec = self.headline_parser.cur_subsec

        if self.operand_kind_parser:
            self.operand_kind_parser.handle_endtag(tag)

        # Check if we are entering a new subsection.
        if last_subsec != cur_subsec:
            # First archive the table we collected and drop the parser.
            if self.operand_kind_parser != None:
                ENUMERATIONS[last_subsec.split(' ', maxsplit=2)[1]] = self.operand_kind_parser.to_struct(last_subsec)
                self.operand_kind_parser = None
            if cur_sec and cur_sec.endswith("Binary Form"):
                if cur_subsec.endswith("Instructions"):
                    pass
                else:
                    self.operand_kind_parser = OperandKindParser(self.headline_parser)

SpirvSpecParser().feed(spec)

out_json = {
    "enumerations": ENUMERATIONS,
}

with open("specs/unified1/SPIRV.json", "w") as f:
    json.dump(out_json, f, indent=4)
