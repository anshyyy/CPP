#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = 0, i = 3, j = 2;
    if (a > b)
    {
        c = 0;
    }
    else
    {
        while (a <= b)
        {
            a = i * a;
            b = j * b;
            c++;
        }
    }
    cout << c << endl;
    return 0;
}