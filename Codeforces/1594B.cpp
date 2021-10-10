#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,k;
     cin>>n>>k;
     ll p =1;
     ll ans=0;
     loop(i,0,31){
         if(k&(1<<i)){
             ans=(ans+p)%INF;
         }
         p*=n;
         p%=INF;
     }
     cout<<ans<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}