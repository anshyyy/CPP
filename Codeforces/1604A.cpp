#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,ans=0,id=-1;
     cin>>n;
     vector<ll>arr(n+1,0);
     loop(i,1,n+1)cin>>arr[i];
     loop(i,1,n+1){
       if(arr[i]>i){
           ll x = arr[i]-i;
           ans = max(ans,x);
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