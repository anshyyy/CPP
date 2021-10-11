#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     ll ans=arr[0];
     for (int i = 0; i < n; i++)
     {
         ans =ans& arr[i];
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