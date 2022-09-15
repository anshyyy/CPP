from functools import cache

def solve(): 
    n = int(input())
    arr = [int(x) for x in input().split()]
  
    
    def rec(i,j):
        if i == j:
            return arr[i]
        return max(arr[i]-rec(i+1,j),arr[j]-rec(i,j-1))  

    print(rec(0,n-1))
 
if __name__ == '__main__' :
  t = 1
 
  while(t>0):
     solve() 
     t-=1