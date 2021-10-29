for _ in range(int(input())):
    n,m,k=map(int,input().split())
    if((n-1)+(n*m)-n==k):
        print("YES")
    else:
        print("NO")