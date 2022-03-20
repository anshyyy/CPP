n = int(input())
arr = [int(x) for x in input().split()]
b = []
for i in range(n):
    b.append((arr[i],i+1))
b.sort(reverse=True)
ind = []
ans = 0
id = 0
for i in range(n):
    ans += b[i][0]*id + 1
    id+=1
    ind.append(b[i][1])
print(ans)
print(*ind)