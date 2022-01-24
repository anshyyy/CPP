from math import gcd
t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    x = l[0]
    y = l[1]
    for i in range(0, len(l)):
        if(i%2==0):
            x= gcd(x,l[i])
        else:
            y = gcd(y,l[i])
    ans1 = True
    ans2 = True
    for i in range(0,len(l)):
        if(i%2==1 and l[i]%x==0):
            ans1 = False
        if(i%2==0 and l[i]%y==0):
            ans2 = False
    if(ans1):
        print(x)
    elif (ans2):
        print(y)
    else:
        print(0)
