#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'isBalanced' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING s as parameter.
#

def isBalanced(s):
    
    stk = list()
    
    d = {
        ')':'(', ']':'[', '}':'{'
    }
    
    for i in s:
        if i in d.values():
            stk.append(i)
        elif stk == [] or stk.pop() != d[i]:
            return "NO"
            
    if not stk:
        return "YES"
    return "NO"
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        s = input()

        result = isBalanced(s)

        fptr.write(result + '\n')

    fptr.close()
