def is_magical(s):
    for i in range(len(s)):
        if(s[i]!='1' and s[i]!='4'):
            return False
        if(s[0]=='4'):
            return False
        if(s.find('444')!= -1):
            return False
    return True

s = input()
print("YES" if is_magical(s) else "NO")
