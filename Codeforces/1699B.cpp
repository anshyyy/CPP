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
void print(int arr[], int n)
{
    loop(i, 0, n) cout << arr[i] << " ";
    cout << endl;
}
void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>>ans(n,vector<ll>(m));
    // ans.push_back({0, 1, 1, 0});
    // ans.push_back({0, 1, 1, 0});
    // ans.push_back({1, 0, 0, 1});
    // ans.push_back({1, 0, 0, 1});
    loop(i, 0, n)
    {
        loop(j, 0, m)
        {
            if(i%4==0||i%4==3){
                if(j%4==0||j%4==3){
                    ans[i][j]=0;
                }
                else ans[i][j]=1;
            }else{
                if(j%4==0|| j%4==3){
                    ans[i][j]=1;
                } else ans[i][j]=0;
            }
        }
    }
    loop(i,0,n){
        loop(j,0,m){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
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