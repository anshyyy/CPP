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
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    loop(i, 1, n + 1) cin >> arr[i];
    ll mini = 1e18;
    for (int i = 1; i <= n; i++)
    {
        ll prev = 0;
        ll sum = 0;
        for (int j = i - 1; j >= 1; j--)
        {
            prev += arr[j] - prev % arr[j];
            sum += prev / arr[j];
        }
        prev=0;
        for (int j = i + 1; j <= n; j++)
        {
            prev += arr[j] - prev % arr[j];
            sum += prev / arr[j];
        }
        mini = min(sum, mini);
    }
    cout << mini << endl;
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