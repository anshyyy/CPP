def solve(): 
    n,d = map(int,input().split())
    arr = [int(x) for x in input().split()]
    arr.sort()
    if arr[n-1]-arr[0]<=d:
        print(int(((n-1)*(n-2)*n)/6))
    else:
        i=0
        j=0
        ans = 0
        while(j<n):
             while(i<n and arr[i]-arr[j]<=d):i+=1
             i-=1
             cnt=i-j
             ans+= cnt*(cnt-1)//2
             j+=1
        print(ans)


if __name__ == '__main__' :
  t = 1
  t= int(input())
  while(t>0):
     solve() 
     t-=1