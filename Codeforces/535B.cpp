#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     loop(i,0,s.size()){
         s[i]=(char)(s[i]=='4'?'0':'1');
     }
    // cout<<s<<endl;
     ll ans=0LL;
     loop(i,0,s.size())
        ans = (2LL*ans +(ll)(s[i]-'0'));
    ll p =1LL;
    loop(i,0,s.size()){
        p = p<<1;
    }
    ans+=p-1LL;
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