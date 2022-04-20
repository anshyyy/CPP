for _ in range(int(input())):
    n,m=map(int,input().split())
    arr = [int(x) for x in input().split()]
    arr.sort(reverse=True)
    ini = arr[0]
    m = m - ((2*ini)+1)
    cnt =0
    for i in range(1,n):
        if(m<=0): break
        m -= (arr[i]+1)
        cnt+=1
    if(cnt==n-1):print("YES")
    else:print("NO")
    
        
    