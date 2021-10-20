#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    loop(i, 0, n) cin >> arr[i];
    ll sum = accumulate(arr.begin(), arr.end(), 0LL);
    if (sum % x != 0)
    {
        cout << n << endl;
        return;
    }
    ll i = 0, j = n - 1;
    while (i < n || j >= 0)
    {
        ll ans = sum - arr[i];
        if (ans % x != 0)
        {
            cout << n - (i+1) << endl;
            return;
        }
        ans = sum - arr[j];
        if (ans % x != 0)
        {
            cout << j << endl;
            return;
        }
        i++;
        j--;
    }
    cout<<"-1\n";
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