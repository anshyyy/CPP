t = int(input())
for _ in range(t):
    a,b=map(int,input().split())
    if(a==0):
        print(1)
    else:
        ans = a + 2*b
        print(ans+1)