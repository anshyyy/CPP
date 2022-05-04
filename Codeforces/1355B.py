from traceback import print_tb


t = int(input())
for _ in range(t):
    n = int(input())
    arr = [int(x) for x in input().split()]
    arr.sort()
    cnt = 0
    maxi = 0
    x=0
    for i in range(0,n):
        maxi = max(maxi,arr[i])
        x+=1
        if(x>=maxi):
            cnt+=1
            x=0
            maxi=0
    print(cnt)

    
