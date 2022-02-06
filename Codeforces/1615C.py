t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    t = input()
    x=y=z=0
    a = 1e9
    for i in range(n):
        x += int(s[i])
        y += int(t[i])
        z += s[i]!=t[i]
    if(x==y):
        a = z
    if(x==n-y+1):
        a = min(a,n-z)
    if(a==1e9):
        print(-1)
    else:
        print(a)
