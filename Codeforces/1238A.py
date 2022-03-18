t = int(input())
for _ in range(t):
    a , b = map(int,input().split())
    print("YES" if a-b>1 else "NO")