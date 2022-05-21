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
int c[200010];
void solve(){ 
     int n;cin>>n;
      for (int i = 0; i < n; i++)
      {
          ll x;cin>>x;
          c[x]++;
      }
     ll ans = n*(n-1)*(n-2)/6;
      for (ll i = 1; i <=200000; i++)
      {
          ans -= c[i]*(c[i]-1)*(n-c[i])/2;
          ans -= c[i]*(c[i]-1)*(c[i]-2)/6;
      }
      cout<<ans<<endl;
}
int main() {
IOS;
int t=1;

while(t--){
 solve(); 
}
     return 0;
}