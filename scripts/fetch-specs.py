"""
Fetch SPIR-V specifications from Khronos registry.
@PENGUINLIONG
"""
import httplib2
from html.parser import HTMLParser

SPEC_URL = "https://www.khronos.org/registry/SPIR-V/specs/unified1"

SPECS = []
class RegistryEnumerationParser(HTMLParser):
    def handle_starttag(self, tag, attrs):
        global SPECS
        if tag == 'a':
            for (key, value) in attrs:
                if key == "href" and value.endswith(".html") and not value.endswith(".mobile.html"):
                    SPECS += [value]

(_, content) = httplib2.Http().request(SPEC_URL, "GET")
RegistryEnumerationParser().feed(str(content))

for spec in set(SPECS):
    (_, content) = httplib2.Http().request(f"{SPEC_URL}/{spec}", "GET")
    with open(f"specs/unified1/{spec}", "wb") as f:
        f.write(content)
