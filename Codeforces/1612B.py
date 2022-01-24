t = int(input())
for _ in range(t):
    n,a,b=map(int,input().split())
    if(a<=n//2 and b>=n//2+1)or(b==n//2 and a==n//2+1):
        print(a,end=" ")
        for i in range(n,0,-1):
            if i != a and i!=b:
                print(i,end=" ")
        print(b)
    else:
        print(-1)