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
vector<vector<int>>g;
vector<int>vis;
vector<int>parent;
int sv ,ev,n,m;
bool dfs(int u ,int p){
    vis[u] = true;
    parent[u] = p;
    for(auto v : g[u]){
        if(v == p) continue;
        if(vis[v]){
            sv = v;
            ev = u;
            return true;
        }
        if(!vis[v])
           if(dfs(v,u)) return true;
    }
    return false;
}
bool visit_all(){
    for(int i = 1;i<=n;i++){
        if(!vis[i]){
            if(dfs(i,-1)) return true;
        }
    }
    return false;
}
// we have to find all cycles and print any one
void solve(){ 
     cin>>n>>m;
     g.resize(n+1);
     vis.resize(n+1);
     parent.resize(n+1);
     for (int i = 0; i <m; i++)
     {
          int u,v;
          cin>>u>>v;
          g[u].push_back(v);
          g[v].push_back(u);
     }
     if(!visit_all()){
         cout<<"IMPOSSIBLE\n";
         return;
     }
     int tv = ev;
     vector<int>ans;
     ans.push_back(ev);
     while(tv!=sv){
         ans.push_back(parent[tv]);
         tv = parent[tv];
     }
     ans.push_back(ev);
     cout<<ans.size()<<"\n";
     for(auto v : ans) cout<<v<<" ";
}
int main() {
int t=1;
// cin>>t;
while(t--){
 solve(); 
}
     return 0;
}