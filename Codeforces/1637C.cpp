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
bool all_one(vector<ll> &arr)
{
    ll xx = 0;
    ll n = arr.size();
    for (int i = 1; i < n - 1; i++)
    {
        xx += (arr[i] == 1);
    }
    return xx == n-2;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    loop(i, 0, n) cin >> arr[i];
    bool no = true;
    if (n == 3)
    {
        if (arr[1] % 2 == 1)
        {
            cout << "-1\n";
            return;
        }
    }
    if (all_one(arr))
    {
        cout << "-1\n";
        return;
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] % 2 == 1)
            ans += arr[i] / 2 + 1;
        else
            ans += arr[i] / 2;
    }
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