#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
ll pre[2000005][31];
void prec(){
    ll N = 2e5+5;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <=30; j++)
        {
             if(i&(1<<j)) pre[i][j]=1;
             pre[i][j]+=pre[i-1][j];
        }
        
    }
    
}
void solve(){ 

     ll l,r;
     cin>>l>>r;
     ll total = r - l +1;
     ll ans = LONG_MAX;
     for (int i = 0; i < 31; i++)
     {
          ll cur = (pre[r][i]-pre[l-1][i]);
          ans = min(ans, total-cur);
     }
     cout<<ans<<endl;
     
}
int main() {
prec();
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}