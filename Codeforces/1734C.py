def solve(): 
  n = int(input())
  s = input()
  a = [0]*(n+1)
  dp =[0]*(n+1)
  for i in range(1,n+1):
      if(s[i-1]=='1'): a[i] = 1
      else: a[i] = 0
  ans = 0
  for i in range(len(s),0,-1):
      for j in range(i,n+1,i):
        if(a[j]==1):break
        dp[j] = i
  print(a)
  print(dp)
  for i in range(1,len(s)+1):
       if(a[i]==0):
           ans += dp[i]
  print(ans) 


 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1