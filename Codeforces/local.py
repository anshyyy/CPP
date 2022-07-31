s = "niraj madarchod hai, magar mera beta hai"
t = "chutiya"
t2 = "madarchod"

# finding chutiya in s
ind = s.find(t)
if(ind!=-1) : print(ind)
else: print("String not found")

#finding madarchod in s
ind = s.find(t2)
if(ind!=-1) : print(ind)
else: print("String not found")