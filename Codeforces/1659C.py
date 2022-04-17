t= int(input())
for _ in range(t):
    n,a,b= map(int,input().split())
    n+=1
    arr = list(map(int,input().split()))
    v = [0]
    for i in arr:
        v.append(i)
    smm = sum(v)
    res = int(1e18)
    current = 0
    for i in range(0,n):
        current = (a+b) * v[i]
        smm -= v[i]
        current += (smm-((n-i-1)*v[i]))*b
        res = min(res,current)
    print(res)
