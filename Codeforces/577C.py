n = int(input())
is_prime = [True for i in range(n+1)]
is_prime[0]=is_prime[1]=False
i = 2
while(i*i<=n):
    if is_prime[i]:
        for p in range(i*i,n+1,i):
            is_prime[p]=False
    i+=1

ans = []
for i in range(1,n+1):
    if(is_prime[i]):
        q = 1
        while(q<=n/i):
            q*=i;
            ans.append(q)
print(len(ans))
print(*ans)
