#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,k;
     ll maxi=LONG_MIN;
     cin>>n>>k;
     vector<ll> arr(n+1);
     for1(i,n){
         cin>>arr[i];
         maxi=max(maxi,arr[i]);
     }
     ll ans=0;
     for (int i = k; i <=n; i++)
     {
         if(maxi==arr[i]){
             ans+=n+1-i;
         }
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