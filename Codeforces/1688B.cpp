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
    vector<ll> arr(n);
    bool only_odd = true;
    bool only_even = true;
    ll even = 0, odd = 0;
    loop(i, 0, n)
    {
        cin >> arr[i];
        if (arr[i] % 2)
        {
            only_even = false;
            odd++;
        }
        else
        {
            only_odd = false;
            even++;
        }
    }
    if (only_odd)
    {
        cout << "0\n";
        return;
    }
    if (odd != 0)
    {
        cout << n - odd << endl;
        return;
    }
    ll mini = LONG_MAX;
    loop(i, 0, n)
    {
        ll x = 0;
        while (arr[i] % 2 == 0)
        {
            arr[i] /= 2;
            x++;
        }
        arr[i] = x;
        mini = min(x,mini);
    }
    cout <<  mini+even-1 << endl;
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