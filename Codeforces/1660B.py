t = int(input())
for _ in range(t):
    n = int(input())
    arr = [int(x) for x in input().split()]
    arr.sort()
    if n==1 and arr[0] ==1 :
        print("YES")
        continue
    if(n==1 and arr[0] > 1):
        print("NO")
        continue
    if(arr[1]-arr[0]>1 and (arr[n-1]-arr[n-2]>1)):
        print('NO')
        continue
    if(arr[n-1]-arr[n-2]>1):
         print("NO")
         continue
    print("YES")
