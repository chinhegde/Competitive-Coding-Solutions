#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    vc=0
    ht=0
    for i in s:
        if i=='U' and ht==0:
            ht+=1
        elif i=='U' and (ht>0 or ht<0):
            ht+=1
        elif i=='D' and ht==0:
            ht-=1
            vc+=1
        elif i=='D' and (ht>0 or ht<0):
            ht-=1
    return  vc
            


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()
