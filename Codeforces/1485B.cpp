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
    int n, q, k,r,l;
    cin >> n >> q >> k;
    vector<int> arr(n + 1);
    loop(i, 1, n + 1) cin >> arr[i];
    while (q--)
    {
        cin >> l >> r;
        cout << k + (arr[r] - arr[l] + 1) - 2*(r - l + 1)<<"\n";
    }
}
int main()
{
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}