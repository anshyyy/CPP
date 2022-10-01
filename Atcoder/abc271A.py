n = int(input())
temp=hex(n)
ans = ""
# print(temp)
if(temp[-2]=='x'):
    ans += '0'+temp[-1]
else:
    ans += temp[-2]+temp[-1]
print(ans.upper())