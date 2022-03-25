n = int(input())
arr = [int(x) for x in input().split()]
arr.sort()
ans = [0]*n
j = 0
for i in range(n):
    if i%2:
        ans[i] = arr[j]
        j+=1
for i in range(n):
    if i%2==0:
        ans[i] = arr[j]
        j+=1
count = 0
for i in range(1,n-1):
    if ans[i]<ans[i-1] and ans[i]<ans[i+1]:
        count+=1
print(count)
print(*ans)


