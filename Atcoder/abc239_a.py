from math import sqrt
n = int(input())
ans = n*(12800000+n)
ans = sqrt(ans)
print('%.2f'%ans)
