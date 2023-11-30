#!/bin/python3

m,n=map(int,input().split(' '))
mag=input().split(' ')
note=input().split(' ')

hm=dict()
for i in mag:
    if i not in hm:
        hm[i]=0
    hm[i]+=1
flag=0
for i in note:
    if i not in hm:
        flag=1
        break
    hm[i]-=1

if flag==1: print('No')

else:
    flagx=0
    for key,val in hm.items():
        if val<0:
            flagx=1
            print('No')
            break
    if flagx!=1: print('Yes')
