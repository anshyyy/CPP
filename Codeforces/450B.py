mod = 1000000007
def solve(): 
  x,y = map(int,input().split())
  
  n = int(input())
  if(x==0 and y ==0):
    print(0)
    return
  arr = []
  arr.append(x%mod)
  arr.append(y%mod)
  i = 0
  w = 4
  while(i<w):
    m = len(arr)
    x = arr[m-1]%mod
    y = arr[m-2]%mod
    z = (x%mod - y%mod)%mod
    arr.append(z%mod)
    i+=1
  while(n>6):
    n=n%6 
  print(arr[n-1])

 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1