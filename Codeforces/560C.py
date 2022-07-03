from re import X


a,b,c,d,e,f = map(int,input().split())

x = (a+b+c)
x*=x

x= x-(a*a + c*c + e*e)
print(x)
