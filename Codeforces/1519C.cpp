#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(ll i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     vector<ll>u(n+1,0),s(n+1,0),ans(n+1,0);
     loop(i,1,n+1)cin>>u[i];
     loop(i,1,n+1)cin>>s[i];
     vector<ll>Teams[n+1];
     loop(i,1,n+1)Teams[u[i]].push_back(s[i]);
     loop(i,1,n+1){
         sort(Teams[i].begin(),Teams[i].end(),greater<ll>());
         ll p = Teams[i].size();
         loop(j,1,p)Teams[i][j]+=Teams[i][j-1];
         loop(k,1,p+1){
             ll mod = p%k;
             ans[k]+=Teams[i][p-mod-1];
         }
     }
     loop(i,1,n+1) cout<<ans[i]<<" ";
     cout<<endl;
}
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}