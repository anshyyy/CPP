#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,x;
     cin>>n>>x;
     vector<ll>wt(n),val(n);
     loop(i,0,n)cin>>wt[i];
     loop(i,0,n)cin>>val[i];
     vector<ll>dp(x+1);
     for(ll i =0;i<=x;i++)dp[i]=0;
     for (ll i = 1; i < n+1; i++)
     {
         for (ll j = x; j >=0; j--)
         {
             if(wt[i-1]<=j){
                 dp[j]= max(val[i-1]+dp[j-wt[i-1]],dp[j]);
             }
         }
     }
     cout<<dp[x]<<endl;
}
int32_t main() {
IOS;
int t=1;
// cin>>t;
while(t--){
 solve(); 
}
     return 0;
}