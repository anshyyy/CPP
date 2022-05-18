t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
    one = arr.count(1)
    two = arr.count(2)
   
    print(one*(n-one) + (one*one-one)//2 + (two*two-two)//2)