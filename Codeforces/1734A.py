def solve(): 
  n=int(input())
  arr = [int(x) for x in input().split()]
  arr.sort()
  ans = 1e9
  for i in range(n-2):
    ans = min(ans , abs(arr[i]-arr[i+1])+abs(arr[i+1]-arr[i+2]))
  print(ans)
 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1