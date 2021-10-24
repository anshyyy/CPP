t = int(input())
for _ in range(t):
    n = int(input())
    arr = [int(x) for x in input().split()]
    zero=0
    one=0
    for i in arr:
        if i ==1:
            one+=1
        elif i ==0:
            zero+=1
    print(pow(2,zero)*one)