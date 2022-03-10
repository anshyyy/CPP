t = int(input())
for _ in range(t):
    n = int(input())
    arr = [1]
    if n <= 19:
        a = 1
        for i in range(n-1):
            arr.append(a*3)
            a = arr[len(arr)-1]
        print("YES")
        print(*arr)
    else:
        print("NO")