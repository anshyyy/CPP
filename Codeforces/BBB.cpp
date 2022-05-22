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
bool dp[101][100100];
bool check[101][100100];

void solve()
{
    long long x, y, z;
    cin >> x >> y >> z;
    y = y + z;
    ll val = 0;
    long long tot = (x * (x + 1)) / 2;

    if ((tot % y) == 0)
    {
        cout << "POSSIBLE" << endl;
        y = tot / y;
        z = z * y;
        tot = x;

        vector<ll> vc(tot + 3);
        for (int i = 1; i <= tot; i++)
        {
            if (i >= 1)
            {
                vc[i - 1] = i;
            }
        }

        for (ll i = tot - 1; i >= 0; i--)
        {
            if (vc[i] <= z)

                z = z - vc[i],
                vc[i] = 0;
        }

        for (auto it : vc)
        {
            if (it != 0)
                ++val;
        }

        cout << val << endl;
        for (int i = 0; i < tot; ++i)
        {
            if (vc[i] > 0 && vc[i] < 0)
            {

                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << "IMPOSSIBLE";
        cout << endl;
    }
}
int main()
{
    IOS;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}