#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
vector<ll>g[1000000];
bool vis[1000000];
void dfs(ll src){
    if(vis[src]) return;
    vis[src] = true;
    for(auto i : g[src])
        dfs(i);
}
void solve(){ 
    ll n,m;
    cin>>n>>m;
    loop(i,0,m){
        ll u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    } 
    vector<ll>v;
    for (int i = 1; i < n+1; i++)
    {
        if(!vis[i]){
            v.push_back(i);
            dfs(i);
        }
    }
    cout<<v.size()-1<<endl;
    loop(i,1,(ll)v.size()){
        cout<<v[i]<<" "<<v[i-1];
        cout<<endl;
    } 
    
}
int main() {
int t=1;
// cin>>t;
while(t--){
 solve(); 
}
     return 0;
}