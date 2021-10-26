t = int(input())
for _ in range(t):
    n,x=map(int,input().split())
    arr=[int(x) for x in input().split()]
    if x>n:
        print("NO")
        break
    brr = arr.copy()
    brr.sort()
    print(brr)
    flag = True
    for i in range(n-x,x):
        if arr[i]!=brr[i]:
            flag = False
    if(flag):
        print("YES")
    else:
        print("NO")