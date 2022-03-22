t = int(input())
for _ in range(t):
    n,b,x,y =map(int,input().split())
    arr = [0]
    i = 1
    while(i<=n):
        xx = arr[i-1] + x
        yy = arr[i-1] - y
        if(xx <= b):
            arr.append(xx)
        else:
            arr.append(yy)
        i+=1
    print(sum(arr))
