n = input()
res = ""
if(int(n)<0):
    if(n[len(n)-1]!="0"):
       for i in range(0,len(n)-1):
           res += n[i]
       a = int(res[len(res)-1])+1
       for i in range(0,len(res)-1):
           print(res[i],end="")
       print(a)
    else:
        for i in range (0,len(n)-1):
            print(n[i],end="")
else:
    for i in range(0,len(n)-1):
        print(n[i],end="")
