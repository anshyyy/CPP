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
ll factt(ll n){
    ll fact=1;
    for (ll i = 1; i <=n; i++)
    {
         fact = (fact*i)%MOD;
    }
    return fact;
    
}
void solve(){ 
     ll n;
     cin>>n;
     ll ans = 0;
     if(n%2){
         cout<<"0\n";
         return;
     }
     ans = (factt(n/2)*factt(n/2))%MOD;
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