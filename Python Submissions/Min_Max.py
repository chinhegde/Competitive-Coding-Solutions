import numpy as np

n,m = map(int,input().split())

a = [list(map(int,input().split())) for i in range(n)]

arr = np.array(a)

a1 = np.min(arr,axis = 1)

print(np.max(a1))
