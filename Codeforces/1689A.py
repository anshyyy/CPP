
t = int(input())
for _ in range(t):
    n, m, k = map(int, input().split())
    a = input()
    b = input()
    l1 = [i for i in a]
    l2 = [j for j in b]
   
    l1.sort()
    l2.sort()
    i = 0
    j = 0
    cnt1 = 0
    cnt2 = 0
    lis3 = []
    while i < n and j < m:
        if l1[i] > l2[j] and cnt2 < k:
            lis3.append(l2[j])
            j += 1
            cnt2 += 1
            cnt1 = 0
        elif l1[i] < l2[j] and cnt1 < k:
            lis3.append(l1[i])
            i += 1
            cnt1 += 1
            cnt2 = 0
       
        elif cnt1 < k:
            lis3.append(l1[i])
            i += 1
            cnt1 += 1
            cnt2 = 0
        elif cnt2 < k:
            lis3.append(l2[j])
            j += 1
            cnt2 += 1
            cnt1 = 0
    print(''.join(lis3))


