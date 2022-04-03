import math
def check(n):
    l = 1
    r = round(math.pow(n, 1 / 3))
    while l<=r:
        mid = l*l*l + r*r*r
        if mid == n:
            return True
        if mid<n:
            l+=1
        else:
            r-=1
    return False

t = int(input())
for _ in range(t):
    n = int(input())
    if check(n):
        print("YES")
    else:
        print("NO")