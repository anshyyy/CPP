n = int(input())
arr = [int(x) for x in input().split()]
s = input()
maxi = 0
f = True
for i in range(n-1):
    maxi = max(arr[i],maxi);
    if(s[i]=='0' and maxi > i+1):
        f = False
        break
if f :
    print("YES")
else :
    print("NO")
        

    