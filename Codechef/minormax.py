t = int(input())
for _ in range(t):
    n = int(input())
    arr = [int(x) for x in input().split()]
    mn = [arr[0]]
    mx = [arr[0]]
    for i in range(1,n):
        mx.append(max(mx[-1],arr[i]))
        mn.append(min(mn[-1],arr[i]))
    flag = True
    for i in range(n):
        if(arr[i]!=mx[i]) and arr[i]!=mn[i]:
            flag = False
    print("YES" if flag else "NO")