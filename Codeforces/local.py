from itertools import chain, combinations

def subset(arr,s):
    itr=chain.from_iterable(combinations(arr, n) for n in range(len(arr)+1))
    result = [el for el in itr if sum(el)==s and len(result)<=1]
    print(result)
    ans = result[0]
    print(len(ans))
    print(*ans)


def solve():
    n,a,b = map(int,input().split())
    z = a+b
    sm = (n*(n+1))/2
    if(sm%z !=0):
        print("IMPOSSIBLE")
    else :
        print("POSSIBLE")
        x = int((a*sm)/z)
        y = int((b*sm)/z)
        arr = []
        for i in range(1,n+1):
            arr.append(i);
        subset(arr,x)

def main():
    t = int(input())
    for i in range(1,t+1):
        print(f"Case #{i}: ",end="")
        solve()



if __name__ == '__main__':
    main()
