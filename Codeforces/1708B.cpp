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
    ll n, l, r;
    cin >> n >> l >> r;
    if (r - l + 1 < n)
    {
        cout << "NO\n";
        return;
    }
    vector<ll> ans;
    for (int i = 1; i <= n; i++)
    {
        if (l % i == 0)
        {
            ans.push_back(l);
        }
        else
        {
            ll m = l % i;
            ll xx = (l + i) - m;
            // cout<<m<<" "<<xx<<endl;
            if (xx < l || xx > r)
            {
                cout << "NO\n";
                return;
            }
            else
            {
                ans.push_back(xx);
            }
        }
    }
    cout << "YES\n";
    loop(i, 0, n)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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