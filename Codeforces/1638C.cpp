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
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
void add_edge(vector<int> arr[], int u, int v)
{
    arr[u].push_back(v);
    arr[v].push_back(u);
}
void bfs(vector<int>adj[],int s,vector<bool>vis){
    queue<int>q;
    vis[s]=true;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adj[u]){
            if(!vis[v]){
                vis[v]=true;
                q.push(v);
            }
        }
    }
}
int dis(vector<int>adj[],int v){
     vector<bool>vis(v+1,false);
     int count = 0;
     for (int i = 0; i < v; i++)
     {
         if(!vis[i]){
             bfs(adj,i,vis);
             count++;
         }
     }
     return count;
}
void solve()
{
    int n;
    cin >> n;
    int i ;
    int m=0,r=0;
    for(i = 1;i<=n;i++){
        int x;
        cin>>x;
        m = max(m,x);
        if(m==i) r++;
    }
    cout<<r<<endl;
    
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