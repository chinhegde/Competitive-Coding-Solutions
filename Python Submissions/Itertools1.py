from itertools import combinations_with_replacement as cwr 
ip=input().split()
s=ip[0]
k=int(ip[1])
l=list(cwr(s,k))
r=[]
for i in l:
    i=list(i)
    i.sort()
    r.append(i)
r.sort()
for i in r:
    for j in i:
        print(j,end='')
    print()
    

