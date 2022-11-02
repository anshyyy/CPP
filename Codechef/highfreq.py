from collections import Counter


def solve(): 
  n = int(input())
  ar = [int(x) for x in input().split()]
  d = Counter(ar)
  temp = sorted(d.values())
  if(len(temp)==1):
      print((temp[0]+1)//2)
  else :
       ff = temp[-2]
       ss = temp[-1]
       if(ss >= 2*ff): print((ss+1)//2)
       else : print(ff)


 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1