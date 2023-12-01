n=int(input())
k=[]
for i in range(n):
    k=input().split()
    try:
        k=list(map(int,k))
        result=k[0]//k[1]
        print(result)
    except (ValueError,ZeroDivisionError) as e:
        print("Error Code:",e)
