#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i, j;
    ll n, sum = 0;
    cin >> n;
    ll a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0, j = 0; i < n, j < n; j++, i++)
    {
        sum += a[i][j];
        a[i][j] = 0;
    }
    for (i = 0, j = n-1; i < n, j >= 0; j--, i++)
    {
        sum += a[i][j];
        a[i][j] = 0;
    }
    for (i = 0; i < n; i++)
    {
        sum += a[n / 2][i];
        a[n / 2][i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        sum += a[i][n / 2];
        a[i][n / 2] = 0;
    }
    cout << sum;

    return 0;
}