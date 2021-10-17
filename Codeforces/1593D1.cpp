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

     if(all_of(arr.begin(),arr.end(),[&](ll x){return x==arr[0];})){
          cout<<"-1\n";
          return;
     }
     vector<ll>result;
     ll mini = *min_element(arr.begin(),arr.end());

     for (int i = 0; i <n; i++)
     {
         if(arr[i]!=mini){
              result.push_back(arr[i]-mini);
         }
     }
     ll ans=result[0];
     loop(i,1,result.size()){
          ans = __gcd(ans,result[i]);
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