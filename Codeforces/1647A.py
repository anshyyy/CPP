t = int(input())
for _ in range(t):
    n = int(input())
    if n == 1:
        print('1')
    elif n == 2:
        print('2')
    elif n %3==0 or n%3 ==2:
        ans = '2'
        n = n - 2
        tt = True
        while n>0:
            if tt :
                n = n -1
                ans += '1'
                tt = False
            else :
                n = n -2
                ans += '2'
                tt = True
        print(ans)
    elif n % 3 ==1:
        ans = '1'
        n = n-1
        tt = False
        while n>0:
            if tt :
                n = n-1
                ans += '1'
                tt = False
            else :
                n = n-2
                ans += '2'
                tt = True
        print(ans)
