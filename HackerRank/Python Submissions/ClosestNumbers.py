#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'closestNumbers' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def closestNumbers(arr):
    arr.sort()
    diff = arr[1]-arr[0]
    res = list()
    for i in range(1,len(arr)):
        if diff > (arr[i]-arr[i-1]):
            diff = (arr[i]-arr[i-1])
    for i in range(len(arr)-1):
        if arr[i+1]-arr[i] == diff:
            res.extend([arr[i],arr[i+1]])
    return res

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = closestNumbers(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
