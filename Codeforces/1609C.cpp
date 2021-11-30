#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
bool prime[1000055]={true};
void sieve(ll n){
    memset(prime,true,sizeof(prime));
    for (ll i = 2; i*i <=n; i++)
    {
        if(prime[i]==true){
            for(ll j = i*i;j<=n;j+=i)
               prime[j]=false;
        }
    }
    
}

void solve(){ 
    ll n,e;
    cin>>n>>e;
    vector<ll>arr(n);
    loop(i,0,n)cin>>arr[i];
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll l=0,r=0;
        if(prime[arr[i]]&&arr[i]!=1){
           for (ll j = i+e; j < n; j+=e)
           {
               if(arr[j]==1){
                   r++;
               }
               else break;
           }
           for (ll j = i-e; j >=0; j-=e){
               if(arr[j]==1){
                   l++;
               }
               else break;
           }
           ans+=(l+r+l*r);
        }
    }
    cout<<ans<<endl;
}
int main() {
int t=1;
sieve(1000055);
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}