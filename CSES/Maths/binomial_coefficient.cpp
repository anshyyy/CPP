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
ll facto[1000002];
ll inv[1000002];
ll ninv[10000002];
using namespace std;
void inverseN(ll x){
  ninv[0]=ninv[1]=1;
  for (int i = 2; i < 1000001; i++)
  {
       ninv[i]=ninv[x%i]*(x-x/i)%x;
  }
  
}
void inversefac(ll x){
    inv[0]=inv[1]=1;
    for (int i =2; i <=1000001; i++)
    {
        inv[i]=(ninv[i]*inv[i-1])%x;
    }
    
}
void fact(ll a){
       facto[0]=1;
       inv[0]=1;
       for (ll i = 1; i <=a; i++)
       {
           facto[i]=(facto[i-1]*i)%INF;
       }
}
void solve(){ 
    ll n,r;cin>>n>>r;
    cout<<((facto[n]*inv[r])%INF*inv[n-r])%INF<<"\n";
}
int main() {
IOS;
fact(1000001);
inverseN(INF);
inversefac(INF);
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}