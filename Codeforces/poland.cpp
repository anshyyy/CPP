#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
bool checkPrimeNumber(int n)
{
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}
int main()
{
    int n, m, l;
    cin >> n;
    for (m = 1; m < 1000; m++)
    {
        if (m != n)
        {
            if (checkPrimeNumber(n*m+1) == false)
            {
                cout << m;
                break;
            }
        }
    }
    

    return 0;
}