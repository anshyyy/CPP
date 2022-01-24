n = int(input())
for _ in range(n):
    s = input()
    x = len(s)
    if x>10:
        print(s[0],x-2,s[x-1],sep="")
    else:
        print(s)