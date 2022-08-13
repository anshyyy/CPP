def solve(): 
   n = int(input())
   ans = 0
   arr = [int(x) for x in input().split()]
   mp = {arr[i]:i+1 for i in range(n)}
   for i in range(2*n):
      for j in range(i+1,2*n):
         if(i*j>=2*n):break;
         pro = i*j
         id1 = mp.get(i)
         id2 = mp.get(j)
         if(id1==None or id2==None): continue
         if(mp.get(i)+mp.get(j) == pro):
            ans+=1

   print(ans)

 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1