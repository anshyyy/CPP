def solve(): 
  n,k=map(int,input().split())
  arr = [int(x) for x in input().split()]
  s = set()
  arr.sort()
  for i in arr:
     if (i//k not in s) or (i%k != 0):
        s.add(i)
  print(s)
  print(len(s)) 
 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1