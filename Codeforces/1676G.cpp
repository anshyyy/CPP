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
vector<int>g[4001];
char s[4001];
int ans = 0;
int dfs(int id){
    int cnt = 0;
    if(s[id]=='W')cnt--;
    else cnt++;
    int sum = cnt;
    for (int i = 0; i <g[id].size(); i++)
    {
         int tmp = dfs(g[id][i]);
         sum+=tmp;
    }
    if(sum==0)ans++;
    return sum;
    
}
void solve(){ 
     int n;
     cin>>n;
     for (int i = 2; i <= n; i++)
     {
         int x;cin>>x;
         g[x].push_back(i);
     }
     for (int i = 1; i <=n; i++)
     {
         cin>>s[i];
     }
     
     ans=0;
     dfs(1);
     cout<<ans<<endl;
     for (int i = 1; i <=n; i++)
     {
         g[i].clear();
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