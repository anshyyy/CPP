def check(arr,d,m):
      x = arr[0]
      if(x > d):
            return False
      if(m-arr[-1]> d): return False
      for i in range(1,len(arr)):
         x = (arr[i]-arr[i-1])/2
         if(x > d):
            return False
      return True

def solve(): 
    n,m=map(int,input().split())
    
    arr = [int(x) for x in input().split()]
    arr.sort()

    d = max(arr[0],m-arr[-1])
    for i in range(1,n):
        d = max(d,(arr[i]-arr[i-1])/2)
    print(d)




 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1