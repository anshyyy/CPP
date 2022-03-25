t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    fn = ''.join(sorted(s))
    if(s == ''.join(sorted(s))):
        print('0')
    else:
        print(1)
        id = []
        for i in range(n):
            if s[i]!=fn[i]:
                id.append(i+1)
        print(len(id),end=" ")
        print(*id)
