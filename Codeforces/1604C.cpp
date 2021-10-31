#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     vector<ll>arr(n+1);
     loop(i,1,n+1){
         cin>>arr[i];
     }
     ll j =2;
     for (int i = 1; i <= n; i++)
     {
         if(j>1e9) continue;
         if(arr[i]%j==0){
             cout<<"NO\n";
             return;
         }
         ll t = __gcd(j,ll(i+2));
         j = (j*(i+2))/t;
     }
     cout<<"YES\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}