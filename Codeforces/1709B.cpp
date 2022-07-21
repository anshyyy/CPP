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
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    loop(i, 0, n) cin >> arr[i];
    vector<ll>pre(n,0),suff(n,0);
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<arr[i-1]) ans+=arr[i-1]-arr[i];
        pre[i] = ans;
    }
    ans = 0;
    for (int i = n-2; i >=0; i--)
    {

         if(arr[i+1]>arr[i]) ans+=arr[i+1]-arr[i];
         suff[i] = ans;
    }
    for(auto i : pre)cout<<i<<" ";
    cout<<endl;
    for(auto i : suff )cout<<i<<" ";
    cout<<endl;    
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        if (x > y)
        {
            //cout << pref1[y-1] - pref1[x - 1] << endl;
            cout<<suff[y]-suff[x]<<endl;
        }
        else
        {
            cout<<pre[y]-pre[x]<<endl;
            //cout << pref2[x-1] - pref2[y - 1] << endl;
        }
    }
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