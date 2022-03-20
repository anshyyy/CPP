t = int(input())
for _ in range(t):
    n = int(input())
    print('2'+(n-1)*'3' if n > 1 else '-1')