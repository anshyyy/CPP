def solve(): 
   n,x,y = map(int,input().split())
   if x > y : x,y=y,x
   if( x!=0 or y==0):print(-1)
   else:
    if (n-1)%y!=0 : print(-1)
    else:
        for i in range(1,y+1):print(1,end = " ")
        temp = y+2
        for i in range(1,((n-y-1)//y)+1):
            for j in range(1,y+1): 
                print(temp,end=" ")
            temp+=y;
        print()
 
if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1