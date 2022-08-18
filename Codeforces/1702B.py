def solve(): 
  n = int(input())
  arr = [int(x) for x in input().split()]
  arr.sort()
  print(arr[n-1]-arr[0]+arr[n-2]-arr[1])
 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1