#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    string s;
    ll ans = 0, ans1 = 0,sp=0;
    while(n--){
        cin>>s;
        for (int i = 0; i < m; i++)
        {
            if(s[i]=='.'&&s[i+1]=='.'){
                ans1+=y;
                i++;
            }
            else if(s[i]=='.'){
              ans1+=x;
            }
        }
        loop(i,0,m) if(s[i]=='.'){
                ans+=x;
            }
    }
    // if(ans==0||ans1==0){
    //     cout<<max(ans,ans1)<<endl;
    //     return;
    // }
    // cout<<ans1<<" "<<ans<<endl;
    cout<<min(ans1,ans)<<endl;
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