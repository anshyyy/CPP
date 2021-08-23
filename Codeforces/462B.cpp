#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,z,maxi=0;
     cin>>n>>z;
     string s;
     cin>>s;
     vector<ll> arr;
     sort(s.begin(),s.end());
     for (ll i = 0; i < n; i++)
     {
         int j=i;
         while(j<n&&s[i]==s[j]){
             j++;
         }
         arr.push_back(j-i);
         j--;
         i=j;
     }
     sort(arr.begin(),arr.end());
      int sz=arr.size();
     // cout<<sz<<endl;
     //  loop(i,sz)cout<<arr[i]<<" ";
     ll i=0;
     ll ans=0;
     while(z>=0){
         if(z>arr[sz-i-1]){
             z=z-arr[sz-i-1];
             ans+=arr[sz-i-1]*arr[sz-i-1];
         }
         else{
            ans+=z*z;
            break;
         }
         i++;
     }
     cout<<ans<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}