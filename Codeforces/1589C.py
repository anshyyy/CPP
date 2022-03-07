t = int(input())
for _ in range(t):
    n = int(input())
    arr  = [int(x) for x in input().split()]
    brr = [int(x) for x in input().split()]
    arr.sort()
    brr.sort()
    if arr == brr :
        print("YES")
    elif n==1 and (arr[0]+1==brr[0]):
        print("YES")
    elif arr != brr and n==1:
        print('NO')
    else:
        yes = True
        for i in range(n):
            if brr[i] - arr[i]!=0 and brr[i]-arr[i]!=1:
                yes = False
        if yes:
            print("YES")
        else :
            print("NO")
