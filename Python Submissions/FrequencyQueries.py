#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the freqQuery function below.
def freqQuery(queries):
    
    hm = dict()
    res = []
    for ops in queries:
        if ops[0]==1:
            if ops[1] not in hm:
                hm[ops[1]] = 0
            hm[ops[1]] += 1
        if ops[0]==2:
            if ops[1] in hm:
                hm[ops[1]] -= 1
                if hm[ops[1]] <= 0:
                    hm.pop(ops[1], None)
        if ops[0]==3:
            if ops[1] in hm.values():
                print(1)
                res.append(1)
            else:
                print(0)
                res.append(0)
    return res

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    ans = freqQuery(queries)

    fptr.write('\n'.join(map(str, ans)))
    fptr.write('\n')

    fptr.close()
