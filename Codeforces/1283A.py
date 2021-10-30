for _ in range(int(input())):
    hh,mm = map(int,input().split())
    hour = 24
    if mm >0:
        hour = hour-1
        mm = 60 - mm
    print(((hour-hh)*60)+mm)