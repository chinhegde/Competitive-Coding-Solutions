import numpy as np

n,m = map(int,input().split())

a = [list(map(int,input().split())) for i in range(n)]
arr = np.array(a)

arr = np.sum(arr,axis=0)
arr = np.prod(arr,axis=None)

print(arr)

