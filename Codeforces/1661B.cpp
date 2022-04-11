#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 32768;
using namespace std;
vector<ll>pow2(100000);
void solve(){ 
     ll n;
     cin>>n;
     vector<ll>arr(n);
     for(int i = 0;i<n;i++){
         cin>>arr[i];
         if(arr[i]==0){
             cout<<"0\n";
             continue;
         }
         int dp[16],ans=INT_MAX;
         for (int j = 0; j <= 15; j++)
         {
             ll x = arr[i]+j;
             ll c = 0;
             while(x%2==0){ // counting power of 2
                 c++;
                 x/=2;
             }
             dp[i]=j+15-c; 
             ans = min(ans,dp[i]);
         }
         cout<<ans<<" ";
     }
}
int main() {
IOS;
int t=1;
while(t--){
 solve(); 
}
     return 0;
}