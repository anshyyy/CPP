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
bool isconos(char s)
{
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
    {
        return false;
    }
    else
        return true;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxi = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (isconos(s[i]))
        {
            maxi++;
        }
        else
        {
            ans = max(maxi, ans);
            maxi = 0;
        }
    }
    ans = max(ans,maxi);
    //cout << ans << endl;
    (ans >= 4) ? cout << "NO\n" : cout << "YES\n";
}
int main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}