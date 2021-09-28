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
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else if (s[i] == 'B')
        {
            b++;
        }
        else
            c++;
    }
   
    if (b ==a+ c)
    {
        cout << "YES\n";
    }
    else cout<<"NO\n";
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