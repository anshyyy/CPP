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
    ll x, y;
    cin >> x >> y;
    if (x > y)
    {
    //     if(x%2==0 && y%2==0){
    //          cout<<(x-y)/2<<endl;
    //     }
    //   else if (x % 2 && y % 2) //
    //     {
    //         cout << (x - y) / 2 << endl;
    //     }
    //     else
    //     {
    //         ll ans = x - y;
    //         cout << ceil(double(ans) / double(2)) + 1 << endl;
    //     }
    ll ans = x-y;
    if(ans%2==0){
        cout<<ans/2<<endl;
    }
    else{
       ll res = (ans+1)/2;
        cout<<res+1<<endl;
    }
    }
    else
    {
        cout << y - x << endl;
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