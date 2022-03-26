
from numpy import double
a,b,c,x = map(double,input().split())
if x < a:
    print(1.000000000000)
elif x<b:
    num = b-a
    print(c/num)
else:
    print(0.0)

