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
ll n,x,y;
ll dfs(ll level,bool is_red){
    if(level==1){
        return is_red?0:1;
    }
    if(is_red){
        return dfs(level-1,true)+dfs(level,false)*x;
    } else {
        return dfs(level-1,true) + dfs(level-1,false)*y;
    }
}
void solve(){ 
     cin>>n>>x>>y;
     //cout<<dfs(n,true)<<endl;
     ll red[100]={},blue[100]={};
     red[0] =0,blue[0]=1;
     for (int i = 1; i <=n; i++)
     {
       blue[i] = red[i-1] + blue[i-1]*y;
       red[i] = red[i-1] + blue[i]*x;
     }
     cout<<red[n-1]<<endl;
     
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