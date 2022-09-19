def check(arr,d,m):
      x = arr[0]
      if(x > d):
            return False
      for i in range(1,len(arr)):
         x = (arr[i]-arr[i-1])/2.0
         if(x > d):
            return False
      if(m-arr[-1]>x): return False
      return True

def solve(): 
    n,m=map(int,input().split())
    
    arr = [int(x) for x in input().split()]
    arr.sort()

    low = 0
    high = m
    ans = max(arr)
    while low <= high :
        mid = low + (high-low)/2.0
        # print(mid)
        if (check(arr,mid,m)):
            ans = mid
            high = mid-0.001
        else:
            low = mid + 0.001
    # print(high , low)
    print("%.1f"%ans)


 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1