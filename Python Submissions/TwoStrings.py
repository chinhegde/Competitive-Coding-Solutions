#!/bin/python3

t=int(input())
for x in range(t):
    s1=input()
    s2=input()
    flag=0
    for i in s1:
        if i in s2:
            flag=1
            break
    if flag==1: print('YES')
    else: print("NO")
