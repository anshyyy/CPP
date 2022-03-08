from math import ceil


t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    arr = [int(x) for x in input().split()]
    m = n - (ceil(n/2.0)-1)
    p = 0
    sum = 0
    for i in range(n*k-m,-1,-m):
        p+=1
        sum += arr[i]
        if p == k:
            break
    print(sum)


