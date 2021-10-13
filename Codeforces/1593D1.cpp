#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;

void solve(){ 
     ll n;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     sort(arr.begin(),arr.end());
     auto it = unique(arr.begin(),arr.end());
     arr.resize(distance(arr.begin(),it));
      n = arr.size();
     ll maxi = *max_element(arr.begin(),arr.end());
      ll  maxi2 = arr[n-2];
     ll ans = maxi - maxi2;
     if(ans>INT_MAX){
         cout<<"-1"<<endl;
         return;
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