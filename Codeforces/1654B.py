t = int(input())
for _ in range(t):
    s = input()
    mp = {}
    for i in range(len(s)):
        mp[s[i]] = mp.get(s[i],0)+1
    print(mp)