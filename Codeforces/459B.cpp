#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(ll i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     vector<ll> arr(n);
     loop(i,n)cin>>arr[i];
     ll x=*min_element(arr.begin(),arr.end());
     ll y=*max_element(arr.begin(),arr.end());
    if (all_of(arr.begin(), arr.end(), [&] (int i) {return i == arr[0];})){
         cout<<0<<" "<<(n*(n-1))/2<<endl;
         return;
     }
     ll min_ele=0,max_ele=0;
     for (ll i = 0; i <n; i++)
     {
         if(arr[i]==x) min_ele++;
         if(arr[i]==y) max_ele++;
     }
     cout<<y-x<<" "<<min_ele*max_ele<<endl;
     
     
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}