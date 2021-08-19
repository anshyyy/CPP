#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n; 
      cin>>n;
      ll ans = ceil((double)sqrt(n));
      ll res  = sqrt(n);
      res*=res;
      if(n-res==0) cout<<ans<<" "<<1<<endl;
      else if(n-res<=ans) cout<<n-res<<" "<<ans<<endl;
      else 
      {
          ll ka = ans*ans;
          cout<<ans<<" "<<ka-n+1<<endl;
      }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}