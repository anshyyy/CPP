#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (ll i = a; i < n; i++)
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
void solve()
{
    ll  n,k;
    cin >> n >> k;
    ll ab = k+1;
    ll ans = 0;
    ll a[n];
   loop(i,0,n) cin >> a[i];
    loop(i,0,n-1)
    {
        if (ab>0)
        {
            ll res = pow(10, a[i + 1] - a[i]) - 1;
            ll val = min(res, ab);
            ans += pow(10, a[i]) * val;
            ab -= val;
        }
    }
    ans += ab * pow(10, a[n - 1]);
    cout << ans << endl;
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