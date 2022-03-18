t = int(input())
for _ in range(t):
    a,b = sorted(map(int,input().split()))
    x,y = sorted(map(int,input().split()))
    print("Yes" if b==y and a+x==y else "No")