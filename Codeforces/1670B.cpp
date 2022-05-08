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
    string s;
    cin >> s;
    int k;
    cin >> k;
    unordered_set<char> sp;
    for (int i = 0; i < k; i++)
    {
        char a;
        cin >> a;
        sp.insert(a);
    }
    ll c = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (sp.count(s[i]))
        {
            ans = max(ans,i-c);
            c = i;
        }
    }
    cout << ans << endl;
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