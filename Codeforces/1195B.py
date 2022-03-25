n , k = map(int,input().split())
s = 0
i = 1
while i < n:
    s+=i
    if s-(n-i)==k:
        break
    i+=1
print(n-i)