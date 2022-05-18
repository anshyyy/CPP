t = int(input())
for _ in range(t):
    x,y,z = map(int,input().split())
    s = y//x
    if z - s <=0:
        print(0)
    else:
        print(z-s)
 