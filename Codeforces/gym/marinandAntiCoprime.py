mod = 998244353
def fact(n):
    ff = 1;
    for i in range(1,n+1):
        ff = (ff*i)%mod
    return ff;

for _ in range(int(input())):
    n = int(input())
    if(n%2):
        print(0)
    else:
        ans = fact(n//2)
        print((ans*ans)%mod)
