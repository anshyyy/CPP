from pickle import FALSE


t = int(input())
for _ in range(t):
    n ,d = map(int,input().split())
    arr = [int(x) for x in input().split()]
   
    for i in arr:
        flag = False
        if i >= 10*d:
            flag = True
        else:
            while i>0:
                if(i%d)==0:
                    flag = True
                    break
                i-=10
        # 
        if(flag):
            print("YES")
        else:
            print("NO")

