n = int(input())
s = input()
ans = ""
for i in range(n):
    if (n - (i))%2 ==1:
        ans += s[i]
    else:
        ans = s[i] + ans
print(ans)