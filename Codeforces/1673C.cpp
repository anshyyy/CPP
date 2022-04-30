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
const ll mx = 40001;
using namespace std;
vector<int> dp(40001);
bool isPal(int N)
{
    string s="";
    while (N)
    {
        s += '0' + N % 10;
        N /= 10;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    cout << dp[n] << endl;
}
int main()
{
   IOS;
    dp[0] = 1;
    for (int i = 1; i < mx; i++)
    {
        if (!isPal(i))
            continue;
        for (int j = i; j < mx; j++)
        {
            dp[j] += dp[j - i];
        }
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}