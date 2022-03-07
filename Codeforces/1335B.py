t = int(input())
for _ in range(t):
    n,a,b = map(int,input().split())
    s = "a"
    for j in range(1,n):
        s+= chr(j%b + 97)
    print(s)

