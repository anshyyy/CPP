g = ['a', 'e', 'i', 'o', 'u']
ans = [0]*3
h = [5,7,5]
for i in range(3):
    s = input()
    for j in s:
        if j in g:
            ans[i] += 1
if ans == h:
    print('YES')
else:
    print('NO')