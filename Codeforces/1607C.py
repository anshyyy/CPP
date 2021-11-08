for i in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    arr.sort()
    res = arr[0]
    for i in range(0,n-1):
         res = max(res,arr[i+1]-arr[i])
    print(res)
