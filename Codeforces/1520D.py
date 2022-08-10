def solve(): 
  n = int(input())
  mp = {}
  ans = 0
  arr = [int(x) for x in input().split()]
  for i in range(n):
    ans += mp.get(arr[i]-i,0)
    mp[arr[i]-i] = mp.get(arr[i]-i,0)+1
  print(ans)
  
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1