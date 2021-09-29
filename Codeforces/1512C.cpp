#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != '?' && s[n - i - 1] == '?')
            {
                s[n - i - 1] = s[i];
            }
            if (s[i] == '?' && s[n - i - 1] != '?')
            {
                s[i] = s[n - i - 1];
            }
        }
    int c0 = 0, c1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            c0++;
        }
        else if (s[i] == '1')
        {
            c1++;
        }
    }
    a -= c0;
    b -= c1;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == '?')
        {
            if (a > b)
            {
                s[i] = '0';
                s[n - i - 1] = '0';
                a = a - 2;
            }
            else
            {
                s[i] = '1';
                s[n - i - 1] = '1';
                b = b - 2;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            if (a > b)
            {
                s[i] = '0';
                s[n - i - 1] = '0';
                a = a - 1;
            }
            else
            {
                s[i] = '1';
                s[n - i - 1] = '1';
                b--;
            }
        }
    }
    bool flag = false;
    if (a == 0 && b == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << s << endl;
        }
        else
            cout << "-1\n";
    }
    else
        cout << "-1\n";
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}