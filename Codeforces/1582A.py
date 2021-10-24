t = int(input())
for i in range(t):
    a,b,c=map(int,input().split())
    total=a*1+2*b+3*c
    asum=total//2
    rem=total-asum
    print(abs(rem-asum))