from collections import defaultdict
n,m=list(map(int,input().split()))
N=defaultdict(list)
for i in range(n):
    k=input()
    if k not in N:
        N[k]=[]
    N[k].append(i+1)
M=[]
for i in range(m):
    M.append(input())
for i in M:
    if i not in N:
        print(-1)
    else:
        for j in N[i]:
            print(j,end=' ')
        print()
