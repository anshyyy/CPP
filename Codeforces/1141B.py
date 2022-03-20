n = int(input())
arr = [int(x) for x in input().split()]
rest = []
maxi = 0
for i in reversed(range(n)):
    if arr[i]==1:
        maxi +=1
    else:
         break
for i in range(n):
    if(arr[i]==1):
        maxi+=1
    else:
        break
# print(maxi)
mmm = 0
for i in range(n):
    if arr[i]==1:
        mmm+=1
    else :
        maxi = max(maxi,mmm)
        mmm = 0
print(maxi)

