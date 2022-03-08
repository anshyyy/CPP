t = int(input())
for _ in range(t):
    n = int(input())
    for i in range(2,30):
        if n%(2**i-1) == 0 :
            print(n//(2**i-1))
            break