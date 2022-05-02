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
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     vector<int>dp(n,0);
     dp[1]=abs(arr[1]-arr[0]);
     for (int i = 2; i <n; i++)
     {
         dp[i] = min(dp[i-1]+abs(arr[i]-arr[i-1]),dp[i-2]+abs(arr[i]-arr[i-2]));
     }
     for (int i = 0; i < n; i++)
     {
         cout<<dp[i]<<" ";
     }
     cout<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}