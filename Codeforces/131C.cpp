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
ll nCr(ll n, ll r)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    return n *nCr(n - 1, r - 1) / r;
}
void solve()
{
    ll n,m,t;
    cin>>n>>m>>t;
    ll ans = 0;
   for(int i=1;i<t-3;i++){
       ans+=nCr(m,i)*nCr(n,t-i);
   }
    cout<<ans<<endl;
    
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