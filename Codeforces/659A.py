n,a,b=map(int,input().split())
b=b%n
sum=0
if b<0:
    sum=a+b+n
else:
    sum=a+b

if sum%n==0:
    print(n)
else:
    print(sum%n)