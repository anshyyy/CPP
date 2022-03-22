import math

def distance(x1 , y1 , x2 , y2):
    return math.sqrt(math.pow(x2 - x1, 2) +
                math.pow(y2 - y1, 2) * 1.0)

t = int(input())
for _ in range(t):
    x,y = map(int,input().split())
    dis = distance(0,0,x,y)
    dis2 = round(dis)
    if dis == dis2:
        if dis2 == 0:
            print(0)
        else :
            print(1)
    else:
        print(2)
        
