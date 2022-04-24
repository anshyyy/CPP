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
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    loop(i, 0, n) cin >> arr[i];
    vector<int> dp(sum+1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i>= arr[j])
            {
                dp[i] = min(dp[i], dp[i-arr[j]] + 1);
            }
        }
    }
    // for (int i = 0; i <= sum; i++)
    // {
    //     cout << dp[i] << " ";
    // }
     cout << (dp[sum] == 1e9 ? -1 : dp[sum]) << endl;
}
int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}