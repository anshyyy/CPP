n = int(input())
arr = [int(x) for x in input().split()]
arr.sort()
ans = min(arr[n-1]-arr[1],arr[n-2]-arr[0])
print(ans)
