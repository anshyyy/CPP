import math

def sum(a,b,c):
     x=math.sqrt(a*b/c)
     y=math.sqrt(b*c/a)
     z=math.sqrt(a*c/b)
     s=x+y+z
     return 4*s

a,b,c= map(int, input().split())
print(int(sum(a,b,c)))

