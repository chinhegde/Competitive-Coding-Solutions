#!/bin/python3

import math
import os
import random
import re
import sys

def compareTriplets(a, b):
    alice = 0
    bob = 0
    for i,j in zip(a,b):
        if i>j: alice+=1
        if i<j: bob+=1
    return (alice, bob)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
