def k(s):
    res = 0
    for c in 'aeuio':
        res += s.count(c)
    return res
 
 
s1 = input()
s2 = input()
s3 = input()
 
 
print (k(s1), k(s2), k(s3)) == (5,7,5) and 'YES' or 'NO'
