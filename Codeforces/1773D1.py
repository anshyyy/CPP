def solve(): 
  n,x,y = map(int,input().split())
  s = input()
  t = input()
  res = []
  for i in range(n):
    if s[i]!=t[i]:
        res.append(i)
  if len(res)%2:
      print(-1)
      return
  zz = len(res)
  if zz==2:
        if(res[0]+1)==res[1]:
           if(n==2 or n==3):
                print(x)
           elif(n==4):
                if(res[0]): print(x)
                else: print(min(2*y,x))
           else : print(min(2*y,x))
        else : print(y)
  else:
       print((zz//2)*y)
 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1