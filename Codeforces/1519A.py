for _ in range(int(input())):
    a,b,d=map(int,input().split())
    if(min(a,b)*(d+1)>=max(a,b)):
        print("YES")
    else:
        print("NO")