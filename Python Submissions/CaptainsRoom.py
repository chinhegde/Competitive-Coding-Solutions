# Enter your code here. Read input from STDIN. Print output to STDOUT

k = int(input())
g = list(map(int,input().split()))

sg = set(g)

print (int((sum(sg)*k-sum(g))/(k-1)))
