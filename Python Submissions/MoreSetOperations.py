n = int(input())
s = set(map(int, input().split()))
nc=int(input())
com=[]
for i in range(nc):
    com.append(input())
for i in com:
    if i.startswith('pop'):
        s.pop()
    elif i.startswith('remove'):
        i=i.split()
        s.remove(int(i[1]))
    elif i.startswith('discard'):
        i=i.split()
        s.discard(int(i[1]))
print(sum(s))

