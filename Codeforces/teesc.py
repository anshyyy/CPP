l=[3,1,2,6,[6,99],[4,8,5,7],9,10]

a=3
b=4
c = 8
great = lambda x,y,z:max(x,y,z)

x = great(a,c,b)
print(x)
n=[]
for i in range(0,len(l)):
    if isinstance(l[i],list):
        l[i].sort()
        continue
    smallest=i
    n.append(i)
    for j in n:
        if l[j]>l[smallest]:
            l[j],l[smallest]=l[smallest],l[j]


def rev(l):
    for i in range(len(l)//2):
        l[i],l[len(l)-1-i]=l[len(l)-1-i],l[i]
        if isinstance(l[i],list):
            for j in range(len(l[i])//2):
                l[i][j],l[i][len(l[i])-1-j]=l[i][len(l[i])-1-j],l[i][j]

rev(l)
print(l)