from numpy import true_divide


def solve(): 
  n = int(input())
  arr = [int(x) for x in input().split()]
  vis = [0]*3
  x = n
  no = False
  while(True):
    y = arr[x-1]
    vis[x-1] = 1
    x = y
    if y == 0 : break

#   print(*vis)
  for i in vis:
   if(i==0): 
      no = True
      break
  print("NO" if no else "YES")


 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1