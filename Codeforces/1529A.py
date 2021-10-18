def most_frequent(List):
    return max(set(List), key = List.count)

t = int(input())
for i in range(t):
    n = int(input())
    arr = [int(x) for x in input().split()]
    mini = min(arr)
    count = 0
    for i in arr:
        if i == mini:
            count += 1
    print(n-count)


    