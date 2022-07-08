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
    cout << 2 << endl;
   vector<int>vis(n+1,0); // bcz to keep track of what we have printed
   for(int i = 1;i<=n+1;i++){
    if(vis[i]!=1){
        for(int j = i;j<=n;){
            cout<<j<<" ";
            vis[j]=1;
            j+=j;
        }
    }
   }
   cout<<endl;
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