import numpy as np

n,m = map(int,input().split())

a = [ list(map(int,input().split())) for i in range(n)]
a = np.array(a)

print(np.transpose(a))
print(a.flatten())
