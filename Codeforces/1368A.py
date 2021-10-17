t = int(input())
while(t>=0):
    a,b,n=map(int,input().split())
    sum =0
    ans=0
    while(sum<=n):
        if(a>b):
            b+=a
            sum=b
            ans+=1
        else:
            a+=b;
            sum=a
            ans+=1
        if sum>n:
            break
    t = t -1
    print(ans)
      



