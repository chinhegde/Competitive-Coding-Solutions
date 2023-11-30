#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getTotalX' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#
def lcm(arr):
    lcm = 1
    for i in arr:
        lcm = lcm*i//math.gcd(lcm, i)
    return lcm

def gcd(a,b):
    if (b == 0):
        return a
    else:
        return gcd (b, a % b)
    
def getTotalX(a, b):
    lcma = lcm(a)
    gcdb = b[0]
    for c in b[1::]:
        gcdb = gcd(gcdb , c)
    
    res = 0
    for i in range(1,gcdb//lcma+1):
        if gcdb%(lcma*i)==0: res+=1
    return res

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    fptr.write(str(total) + '\n')

    fptr.close()
