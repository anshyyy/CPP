n = int(input())
mp = {}
s = input()
res = ""
for i in range(n-1):
    res = s[i:i+2]
    mp[res] = mp.get(res,0)+1
print(max(mp,key=mp.get))