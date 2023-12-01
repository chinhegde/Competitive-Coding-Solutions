#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hourglassSum function below.
arr=[]
for i in range(6):
    arr.append(list(map(int,input().split(' '))))

hourg=[]
for i in range(4):
    for j in range(4):
        val=arr[i][j]+arr[i][j+1]+arr[i][j+2]
        val+=arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]
        val+=arr[i+1][j+1]
        hourg.append(val)
print(max(hourg))
