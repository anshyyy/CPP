def solve(): 
  a,b,k = map(int,input().split())
  if k%2 ==0:
       n = k//2
       ans = n*a - n*b
       print(ans)
  else :
    n = k//2 + 1
    print(n*a - (n-1)*b)
 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1