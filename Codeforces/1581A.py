t = int(input())
for _ in range(t):
  n = int(input())
  ans = 1
  for i in range(3,2*n+1):
      ans=(ans*i)%1000000007
  print(ans)  


