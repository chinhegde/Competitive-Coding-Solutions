import numpy as np

n,m,p = map(int,input().split())

a = [list(map(int,input().split())) for i in range(n+m)]
a = np.array(a)

print(a)
