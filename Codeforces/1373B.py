t = int(input())
for _ in range(t):
    s = input()
    if all(x == s[0] for x in s):
        print("NET")
    cnt0 = 0
    cnt1 = 0
    res = 0
    for i in s:
        if i == '0':
            cnt0+=1
            res-=1
        else :
            res += 1
            cnt1 += 1
    mini = min(cnt1,cnt0)
    if mini%2 :
        print("DA")
    else :
        print("NET")
    
