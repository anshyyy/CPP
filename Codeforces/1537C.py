def solve(): 
  n = int(input())
  arr = [int(x) for x in input().split()]
  if n==2:
    print(*sorted(arr))
  else:
    arr.sort()
    pos = -1
    mini = 1000000
    for i in range(1,n):
        if mini > abs(arr[i-1]-arr[i]):
            pos = i
            mini = abs(arr[i-1]-arr[i])
    # print(pos)
    print(*arr[pos::], end=' ')
    print(*arr[:pos:])
 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1