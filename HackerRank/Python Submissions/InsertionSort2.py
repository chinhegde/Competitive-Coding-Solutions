#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'insertionSort2' function below.
#
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY arr
#

def insertionSort2(n, a):  
    for i in range(0, len(a)):
        j = i
        while (j > 0 and a[j] < a[j-1]):
            temp = a[j]
            a[j] = a[j-1]
            a[j-1] = temp
            j -= 1
        if i>0: print(' '.join(map(str,a)))
    

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    insertionSort2(n, arr)
