t = int(input())
for _ in range(t):
    n = int(input())
    arr = [int(x) for x in input().split()]
    can = True
    for i in range(1,n):
        if arr[i]>=arr[i-1]:
            can = False
            break
    if can == False:
        print('YES')
    else:
        print('NO')
        