for _ in range(int(input())):
    n = int(input())
    if n >= 1900:
        print("Division 1")
    elif(1600<=n and n<=1899):
        print("Division 2")
    elif(1400<=n and n<=1599):
        print("Division 3")
    else:
        print("Division 4")