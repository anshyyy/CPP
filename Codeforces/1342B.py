t=1 
t = int(input())
for _ in range(t):
  s = input()
  if len(set(s))==1:
      print(s)
  else:
      print('10'*len(s))