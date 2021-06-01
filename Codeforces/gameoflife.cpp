#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> v;
    for (int j = 0; j < min(m, n); j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (s[i] == '0' && s[i + 1] == '1')
                {
                    v.push_back(i);
                }
            }
            else if (i == n - 1)
            {
                if (s[i] == '0' && s[i - 1] == '1')
                {
                    v.push_back(i);
                }
            }
            else
            {
                if (s[i] == '0' && (s[i + 1] - '0' + s[i - 1] - '0') == 1)
                    v.push_back(i);
            }
        }
        for (auto x : v)
            s[x] = '1';
    }
    cout << s << endl;
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