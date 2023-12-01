# Enter your code here. Read input from STDIN. Print output to STDOUT
m=int(input())
ma=list(map(int,input().split()))
n=int(input())
na=list(map(int,input().split()))

ma=set(ma)
na=set(na)

k=na.union(ma)-na.intersection(ma)
k=list(k)
k.sort()
for i in k:
    print(i)
