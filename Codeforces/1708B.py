def solve(): 
  n,l,r = map(int,input().split())
  arr = []
  if((r-l)<n-1):
    print("NO")
    return
  for i in range(1,n+1):
      if(l%i==0):arr.append(l)
      else:
        x = i+l - (l%i)
    
        if x>= l and x<=r:
            arr.append(x)
        else:
            print("NO")
            return
  print("YES")
  print(*arr,sep=" ")

 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1