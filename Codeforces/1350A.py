from math import sqrt

def smallest(n):
    ans = 0
    for i in range(2,int(sqrt(n)+1)):
        if n % i==0:
            return i
    return n

t = int(input())
for _ in range(t):
    n,k=map(int,input().split())
    if n % 2==0:
        ans = n+ k*2
        print(ans)
    elif n%5==0 and n%3!=0 :
        n +=5
        k-=1
        print(n+k*2)
    else:
        small = smallest(n)
        n += small
        k-=1
        ans = n+k*2
        print(ans)
