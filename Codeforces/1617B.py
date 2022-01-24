
t = int(input())
for t in range(t):
    n = int(input())
    if n%2==0:
        n = n-1
        c = 1
        a = n//2
        b = n//2 + 1
        print(a, b, c)
    else:
        n = n - 1
        a = n//2
        b = n-a
        if a %2 ==1 and b%2==1:
            a = a -2
            b = b +2
        if a %2 ==0 and b%2==0:
            a = a-1
            b =b+1
        print(a,b,1)
    
       
       


