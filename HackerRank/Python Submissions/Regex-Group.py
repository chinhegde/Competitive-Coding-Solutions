s = input()

import re

expression=r"([a-zA-Z0-9])\1+"

m = re.search(expression,s)

if m:
    print(m.group(1))
else:
    print(-1)
