# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import deque
n=int(input())
d=deque()
for i in range(n):
    k=input().split()
    if k[0]=='appendleft':
        d.appendleft(k[1])
    elif k[0]=='pop':
        d.pop()
    elif k[0]=='append':
        d.append(k[1])
    elif k[0]=='popleft':
        d.popleft()
for i in d:
    print(i,end=' ')
