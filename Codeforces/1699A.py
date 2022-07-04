def solve(): 
  n = int(input())
  if n%2 == 1:
    print(-1)
  else :
    print(0,0,n//2)
 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1