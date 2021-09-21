#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,sum=0;
     cin>>n;
      vector<ll> arr(n);
      loop(i,n){
           cin>>arr[i];
      }
      sum=accumulate(arr.begin(),arr.end(),0ll);
      sort(arr.begin(),arr.end());
      ll m;
      cin>>m;
      while(m--){
           ll l,r;
           cin>>l>>r;
           auto it= lower_bound(arr.begin(),arr.end(),l);
           ll ans=2e18;
           if(it!=arr.end()){
                ll x=sum-*it;
                ans=max(0ll,r-x);
           }
           if(it!=arr.begin()){
                it--;
                ll x=sum-*it;
                ll curr=max(0ll,r-x);
                curr+=max(0ll,l-*it);
                ans=min(ans,curr);
           }
           cout<<ans<<"\n";
      }

}
int32_t main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}