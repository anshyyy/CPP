n = int(input())
arr = [int(x) for x in input().split()]
arr.sort()
i,j=0,n-1
x ,y=0,0
while i < n//2:
    x+=arr[i]
    i+=1
while j >= n//2:
    y+=arr[j]
    j-=1

print(x*x+y*y)