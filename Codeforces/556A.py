n = int(input())
s = input()
zero,one=0,0
for i in s:
    if i == '0':
        zero+=1
    else :
        one += 1

print(abs(zero-one))
