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
    ll n;
    cin >> n;
    vector<ll> arr(n + 1), b;
    ll res = 0;
    loop(i, 1, n + 1)
    {
        cin >> arr[i];
        if (i > arr[i]) 
        {
            b.push_back(i);
            res += lower_bound(all(b), arr[i]) - b.begin();  //index 
            // cout<<arr[i]<<" "<<res<<" "<<i<<endl;
        }
    }
    cout << res << endl;
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