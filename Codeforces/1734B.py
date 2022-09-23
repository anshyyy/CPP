def solve():
  t = -1 
  n = int(input())
  for i in range(1,n+1):
      if(t<=0):
          for i in range(i):
            print(1,end=" ")
      else:
         print(1,end=" ")
         for x in range(t):
            print(0,end=" ")
         print(1,end = " ")
      t+=1
      print()

 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1