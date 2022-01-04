#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> odd, even;
    loop(i, 0, n)
    {
        cin >> arr[i];
        if (i % 2)
        {
            even.push_back(arr[i]);
        }
        else
        odd.push_back(arr[i]);
    }
    // loop(i,0,even.size())cout<<even[i]<<" ";
    // cout<<endl;
    // loop(i,0,odd.size())cout<<odd[i]<<" ";
    // cout<<endl;
     
    ll egcd = even[0] ;
    for (int i = 1; i < even.size(); i++)
    {
        egcd = __gcd(even[i],egcd);
    }
    ll ogcd = odd[0];
    for (int i = 1; i < odd.size(); i++)
    {
        ogcd = __gcd(ogcd,odd[i]);
    }
      cout<<egcd<<" "<<ogcd<<endl;
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