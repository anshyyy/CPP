#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
#define all(v) (v).begin(), (v).end()
#define all1(v) (v).begin() + 1, (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define allr1(v) (v).rbegin() + 1, (v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> arr(26, 0), brr(26, 0);
    for (auto i : s)
    {
        arr[i - 'a']++;
    }
    int unq = 0;

    loop(i, 0, 26)
    {
        if (arr[i] > 0)
        {
            unq++;
        }
    }
    int aba = 0;
    if (unq > 2)
    {
        loop(i, 0, unq)
        {
            if (brr[s[i] - 'a'] > 0)
            {
                cout << "NO\n";
                return;
            }
            else
            {
                brr[s[i] - 'a']++;
                aba++;
            }
        }
        loop(i, 0, n)
        {
            if (s[i] != s[i % unq])
            {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
    if (unq == 2)
    {
        loop(i, 0, n)
        {
            if (s[i] == s[i + 1])
            {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
    if (unq == 1)
        cout << "YES\n";
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