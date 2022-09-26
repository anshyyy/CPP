def solve(): 
  n = int(input())
  arr = [int(x) for x in input().split()]
  brr = [int(x) for x in input().split()]
  a = []
  for i in range(n):
    a.append(arr[i]-brr[i])
    a.append(arr[i]+brr[i])
  mini = min(a)
  maxi = max(a)
  print((mini+maxi)//2,end = "")
  if(mini+maxi)%2==1:
    print(".5")
  print()
 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1