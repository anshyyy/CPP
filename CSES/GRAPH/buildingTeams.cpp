#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
using namespace std;
const ll INF = 1e9+7;
const ll MOD = 998244353;
vector<ll> g[100001];
bool vis[100001];
ll col[100001];
bool dfs(int src,int t){
       vis[src] = true;
       col[src] =t;
       for(int child : g[src]){
           if(!vis[child]){
              bool res = dfs(child,t^1);
              if(res==false) return false;
           }
               else {
                   if(col[src]==col[child]) return false;
               }
       }
       return true;
}
void solve(){ 
     ll n,m;
     cin>>n>>m;
     vector<ll>distance(n+1,0);
     loop(i,0,m){
         int x,y;
         cin>>x>>y;
         g[x].push_back(y);
         g[y].push_back(x);
     }
     bool can = true;
     for (int i = 1; i < n+1; i++)
     {
         if(!vis[i]){
             can = dfs(i,0);
             if(!can) break;
         }
     }
     if(!can) cout<<"IMPOSSIBLE\n";
     else{
         loop(i,1,n+1)cout<<col[i]+1<<" ";
     }
     

}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}