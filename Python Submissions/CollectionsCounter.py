x=int(input())
shoe_size=list(map(int,input().split()))
n=int(input())
cust=[]
for i in range(n):
    cust.append(list(map(int,input().split())))
earn=0
for i,j in cust:
    if i in shoe_size:
        earn+=j
        shoe_size.remove(i)
print(earn)

