n = int(input())
arr = [int(x) for x in input().split()]
c1,c2=map(int,input().split())
sum = 0
for i in range(c1,c2+1):
    sum+=arr[i]
print(sum)
