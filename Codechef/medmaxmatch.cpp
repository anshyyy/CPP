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
    vector<int> a(n), b(n);
    loop(i, 0, n) cin >> a[i];
    loop(i, 0, n) cin >> b[i];

    sort(all(a));
    sort(all(b));

    reverse(a.begin()+n/2,a.end());
    // loop(i,0,n){
    //     cout<<a[i]<<" ";
    // }
    //cout<<endl;
    vector<int> ans(n);

    loop(i, 0, n)
    {
        ans[i] = a[i] + b[i];
    }
    sort(all(ans));
 
   // loop(i,0,n)cout<<ans[i]<<" ";
    //cout<<endl;
    cout<<ans[n/2]<<endl;
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