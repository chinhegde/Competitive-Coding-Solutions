#!/bin/python3

import math
import os
import random
import re
import sys

n,d=tuple(map(int,input().split()))
arr=list(map(int,input().split(' ')))
subf=arr[:d] #first part of array
subl=arr[d:] #last part of array

subl.extend(subf)

for i in subl:
    print(i,end=' ')
