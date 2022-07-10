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
void solve(){ 
   ll n;cin>>n;
   vector<ll>a(n);
   ll asum = 0;
   loop(i,0,n){
    cin>>a[i];
    asum+=a[i];
   }
   ll m;cin>>m;
   vector<ll>b(m);
   ll bsum =0;
   loop(i,0,m){
    cin>>b[i];
    bsum+=b[i];
   }
   ll ans= INT_MIN;
   ll i,c;
   ll k;cin>>k;
   k = m+n -k;
   for(ll q = 0;q<=k;q++){
     if(q>n || k-q>m)continue;
     for (i =0,c=0;i<q;i++){
      c+=a[i];
     }
     ll s = c;
     for(;i<n;i++){
      c+=a[i]-a[i-q];
      s = min(s,c);
     }
     for(i =0,c=0;i<k-q;i++)c+=b[i];
     ll tt = c;
     for(;i<m;i++){
      c+=b[i]-b[i-k+q];
      tt = min(tt,c);
     }
     ans = max(ans,asum-s+bsum-tt);
   }
   cout<<ans<<endl;
}
int main() {
IOS;
int t=1;
cin>>t;
for (int i =1;i<=t;i++){
 cout<<"Case #" <<i<<": ";
 solve(); 
}
   return 0;
}