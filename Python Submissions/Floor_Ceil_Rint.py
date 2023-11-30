import numpy as np

k = list(map(float,input().split()))

arr = np.array(k)
# print(arr)
np.set_printoptions(sign=' ')
print(np.floor(arr))
print(np.ceil(arr))
print(np.rint(arr))

