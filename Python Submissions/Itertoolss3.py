from itertools import permutations
ip=input().split()
s=ip[0]
k=int(ip[1])
l=list(permutations(s,k))
l.sort()
for i in l:
    for j in range(k):
        print(i[j],end='')
    print()
