import numpy as np

n, m = map(int,input().split())

a1 = [list(map(int,input().split())) for i in range(n)]
a2 = [list(map(int,input().split())) for i in range(n)]

a = np.array(a1)
b = np.array(a2)

print(np.add(a,b))
print(a-b)
print(a*b)
print(a//b)
print(a%b)
print(a**b)
