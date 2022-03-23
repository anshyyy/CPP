t = int(input())
for _ in range(t):
    a,b,c = map(int,input().split())
    k = a+b+c
    j = k/9
    print("YES" if k%9==0 and a>=j and b>=j and c>=j else "NO")