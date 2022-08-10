def solve(): 
  n = int(input())
  arr = [int(x) for x in input().split()]
  print(n//2)
  for i in range(0,n-1,2):
    print(f"{i+1} {i+2} {min(arr[i],arr[i+1])} {int(1e9 + 7)}")
 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1