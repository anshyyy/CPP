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
bool isSorted(vector<ll> &arr)
{
    for (ll i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
            return false;
    }
    return true;
}
bool rsorted(vector<ll> &arr)
{
    for (int i = arr.size() - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
            return false;
    }
    return true;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    loop(i, 0, n) cin >> arr[i];
    if (isSorted(arr))
    {
        cout << "0\n";
        return;
    }
    ll cnt = 0;
    int i = n - 2;
    while (i >= 0)
    {
        while (arr[i] >= arr[i + 1] && arr[i] != 0 && arr[i + 1] != 0)
        {
            arr[i] /= 2;
            cnt++;
        }
        i--;
    }
    if (isSorted(arr))
        cout << cnt << endl;
    else
        cout << "-1\n";
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