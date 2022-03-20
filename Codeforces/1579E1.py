from collections import deque
t = int(input())
for _ in range(t):
    n = int(input())
    arr = [int(x) for x in input().split()]
    dq = deque()
    dq.append(arr[0])
    last = arr[0]
    for i in range(1,n):
       if last >= arr[i]:
           dq.appendleft(arr[i])
           last = arr[i]
       else :
           dq.append(arr[i])
          # last = arr[i]
    print(*dq)
