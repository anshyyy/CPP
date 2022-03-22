t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    i,j = 0,1
    op = 0
    while i<n and j<n:
        if s[i]==')' and s[j] == '(': 
            j+=1
        else :
            i = j+1
            j+=2
            op+=1
    print(op,n-i)
