n = int(input())
sm = 0
arr = list(map(int,input().split()))
sm = sum(arr)
print(int((n*(n+1))/2 - sm))