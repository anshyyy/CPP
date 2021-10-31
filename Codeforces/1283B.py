for _ in range(int(input())):
    n,k=map(int,input().split())
    ans =n-n%k
    ans+=min(n%k,k//2)
    print(ans)

