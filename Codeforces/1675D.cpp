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
vector<vector<ll>> adj;
vector<vector<ll>>ans;
vector<ll>arr;
void dfs(ll curr_node){
    bool done = false;
    for(auto x : adj[curr_node]){
        if(!done){
            arr.push_back(x);
            dfs(x);
            done = true;
        } else {
            arr = {x};
            dfs(x);
        }
    }
    if(adj[curr_node].size()==0) ans.push_back(arr);
}
void solve(){ 
     ll n;cin>>n;
     ans.clear();
     arr.clear();
     adj.assign(n+1,{});
     ll root = -1;
     for (int i = 1; i <=n; i++)
     {
         ll x;cin>>x;
         if(x==i) root = i;
         else adj[x].push_back(i);
     }
     arr = {root};
     dfs(root);
     cout<<ans.size()<<"\n";
     for(auto x : ans){
         cout<<x.size()<<endl;
         for(auto y : x)cout<<y<<" ";
         cout<<"\n";
     }
     
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}