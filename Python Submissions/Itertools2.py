from itertools import combinations
ip=input().split()
s=ip[0]
k=int(ip[1])
l=[]
for i in range(1,k+1):
    l.append(list(combinations(s,i)))
r=[]
for i in l:
    d=[]
    for j in i:
        j=list(j)
        j.sort()
        d.append(j)
    d.sort()
    r.append(d)
for i in r:
    for j in i:
        for m in j:
            print(m,end='')
        print()
