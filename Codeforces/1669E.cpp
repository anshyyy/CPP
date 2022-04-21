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
     ll n;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     vector<ll>a(n);
     a[0]=arr[0];
     loop(i,1,n){
        a[i]=a[i-1]+arr[i];
     }
     ll res = 0;
     ll ans = 0;
     for (int i = n-1; i >=0; i--)
     {
          res+=arr[i];
          ll p = lower_bound(all(a),res) - a.begin();
          if(res==a[p]&&p+n-i+1<=n) 
            ans = max(ans,p+n-i+1);
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