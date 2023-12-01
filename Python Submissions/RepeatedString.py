#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the repeatedString function below.
s=input()
n=int(input())
q=n//len(s)
r=n%len(s)
count=s.count('a')*q + s[:r].count('a')
print(count)
