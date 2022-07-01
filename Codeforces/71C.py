n = int(input())
arr = [int(x) for x in input().split()]
pos = set()
for i in range(0,n):
    j = i
    while(j<n and arr[i]==arr[j] and arr[i]==1):
        j+=1
    pos.add(j-i)
    j-=1
    i=j

print(pos)
yes = False
for i in range(3,n+1):
    if(i in pos):
        yes = True
        break
print("YES" if yes else "NO")

