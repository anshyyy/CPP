def reverse(string):
    string = string[::-1]
    return string

n = int(input())
s = input()
a = reverse(s)
if a == sorted(s):
    print("No")
else : print("Yes")