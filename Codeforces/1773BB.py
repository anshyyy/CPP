def solve(): 
  n = int(input())
  arr = [int(x) for x in input().split()]
  if n==1:
    print(0)
    return
  ans = []
  ans.append((1,n))
  if(arr[0]+arr[n-1])%2:
    arr[n-1]=arr[0]
  else: arr[0] = arr[n-1]
  evx = arr[0]%2
  for i in range(1,n-1):
    if evx==0 :
        if(arr[i]%2): ans.append((1,i+1))
        else : ans.append((i+1,n))
    else:
        if(arr[i]%2): ans.append((i+1,n))
        else : ans.append((1,i+1))
  print(len(ans))
  for i in ans:
    print(i[0],i[1])
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1