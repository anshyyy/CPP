n,k,x = map(int,input().split())
arr = [int(x) for x in input().split()]
for i in range(n):
    if k == 0:
        break
    if arr[i]>=x:
        k1 = arr[i]//x
        if k1>k:
            k1 = k
        arr[i]-=k1*x
        k-=k1
arr.sort(reverse=True)
if n<=k:
    print(0)
    exit(0)
print(sum(arr[k:]))



