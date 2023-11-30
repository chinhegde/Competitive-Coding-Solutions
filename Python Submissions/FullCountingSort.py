#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countSort' function below.
#
# The function accepts 2D_STRING_ARRAY arr as parameter.
#

def countSort(arr):
    for i in range(int(len(arr)/2)):
        arr[i][1] = '-'
    freq = [[] for _ in range(len(arr))]
    for i,j in arr:
        freq[int(i)].append(j)
    res = [item for sublist in freq for item in sublist]
    print(' '.join(map(str, res)))

if __name__ == '__main__':
    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(input().rstrip().split())

    countSort(arr)
