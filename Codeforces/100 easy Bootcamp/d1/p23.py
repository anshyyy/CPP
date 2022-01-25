from math import sqrt


prime = [True for i in range(10000000)]
def sieve():
    prime[0]=False
    prime[1]=False
    i = 2
    while(i*i<=10000000):
        if prime[i]==True:
            for p in range(i**2,10000000,i):
                prime[p] = False
        i+=1


if __name__=='__main__':
    sieve()
    n = int(input())
    arr = [int(x) for x in input().split()]
    for i in range(n):
        x = arr[i]
        a = int(sqrt(x))
        if a==sqrt(x) and prime[a]:
            print("YES")
        else:
            print('NO')

