
n = int(input())
arr = [int(x) for x in input().split()]
count = 0
a=0
b=0
for i in range(n-1):
    if(arr[i]>arr[i+1]):
       a=i
       break
for j in range(n-1,-1,-1):
    if(arr[j]<arr[j-1]):
        b = j
        break
brr = arr[a:b+1]
brr.reverse()
arr[a:b+1] = brr
if(arr==sorted(arr)):
    print('yes')
    print(a+1,b+1)
else:
    print('no')
