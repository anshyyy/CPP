n = int(input())
arr = list(map(int,input().split()))
ans = 0
for i in range(n-1):
    if(arr[i]>arr[i+1]):
        ans += arr[i]-arr[i+1]
        arr[i+1]=arr[i]
print(ans)
