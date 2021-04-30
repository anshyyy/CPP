#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n, m, count = 0;
    cin >> n >> m;

    for (b = 0; b <= m * m; b++)
    {
        a = m - b * b;
        if (a * a + b == n && a >= 0)
        {
            count++;
        }
    }

cout<<count;
return 0;
}