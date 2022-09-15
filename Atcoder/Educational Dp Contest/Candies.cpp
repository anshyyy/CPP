#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
void solve(){ 
     ll n,k;
     cin>>n>>k;
     vector<ll>arr(n+1,0);
     loop(i,1,n+1)cin>>arr[i];
     vector<ll>dp(k+1,0);
     dp[0] = 1;
     for (ll i = 1; i <= k; i++)
     {
         for (ll j = 0; j < n; j++)
         {
              if(arr[j]<=i){
                (dp[i] += dp[i-arr[j]]) ;
              }
         }
     }
     cout<<dp[k]<<endl;
     
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}