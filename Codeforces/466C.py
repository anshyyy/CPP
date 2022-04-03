n = int(input())
arr = [int(x) for x in input().split()]

if (sum(arr)%3):
    print(0)
    exit(0)
cnt,ans,temp =0,0,0
arSum = sum(arr)
arSum//=3
for i in range(n-1):
    temp += arr[i]
    if(temp ==2*arSum): 
        ans+=cnt
    if(temp==arSum):
        cnt+=1

print(ans)
