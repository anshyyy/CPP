#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
void solve()
{
    ll n, q;
    cin >> n >> q;
    unordered_map<ll, vector<ll>> mp;
    unordered_map<ll, ll> fre;
    vector<ll> arr(n);
    loop(i, 0, n)
    {
        cin >> arr[i];
        mp[arr[i]].push_back(i + 1);
        fre[arr[i]]++;
    }
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        if (fre[x] && fre[x] >= y)
        {
            cout<<mp[x][y-1]<<endl;
            // for (auto a : mp)
            // {
            //     if (a.first == x)
            //     {
            //         cout << a.second[y - 1] << endl;
            //     }
            // }
        }
        else
        {
            cout << "-1\n";
        }
    }
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