t = int(input())
for _ in range(t):
    n = int(input())
    arr = [int(x) for x in input().split()]
    arr.sort()
    print(arr[n-1]+arr[n-2])