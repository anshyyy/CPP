#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    if (n <= 3)
    {
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'T' && str[i + 1] == 'M' && str[i + 2] == 'T')
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
    int t = 0, m = 0;
    if (n > 3)
    {

        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'T')
            {
                t++;
            }
            else
            {
                m++;
            }
        }

    if (t == 2 * m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;

    }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}