def getArrayOfSizeK(n, k):
    ans = []
    odd = n - ((k - 1) * 1)
    if (odd > 0
        and odd % 2 != 0):
        for i in range(k - 1):
            ans.append(1)
        ans.append(odd)
    even = n - ((k - 1) * 2)
    if (even > 0
        and even % 2 == 0
        and len(ans) == 0):
        for i in range(k - 1):
            ans.append(2)
        ans.append(even)
    if (len(ans) > 0):
        print("YES")
        for i in range( k):
            print (ans[i], end = " ")
         
    else :
        print ("NO")

for _ in range(int(input())):
    n,k=map(int,input().split())
    if k>n: print("NO")
    else : 
       getArrayOfSizeK(n,k)
       print("\n")
    
