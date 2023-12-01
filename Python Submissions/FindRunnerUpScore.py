if __name__ == '__main__':
    n = int(input())
    arr =list( map(int, input().split()))
    arr.sort()
    i=len(arr)-2
    run=arr[i]
    while run==max(arr):
        i-=1
        run=arr[i]
    print(run)

