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
     int n;cin>>n;
     vector<vector<int>>arr(n,vector<int>(n,0));
     loop(i,0,n){
         loop(j,0,n){
             char s;cin>>s;
             arr[i][j] = (s=='.')?1:0;
         }
     }
     vector<vector<int>>dp(n,vector<int>(n,0));
     if(arr[n-1][n-1]) dp[n-1][n-1]=1;
     for (int i = n-2; i >=0; i--)
     {
          if(arr[i][n-1]==0) dp[i][n-1]=0;
          else dp[i][n-1] +=dp[i+1][n-1];
     }
     for (int i = n-2; i >=0; i--)
     {
          if(arr[n-1][i]==0) dp[n-1][i]=0;
          else dp[n-1][i] +=dp[n-1][i+1];
     }
     for (int i = n-2; i>=0; i--)
     {
          for (int j = n-2; j >=0; j--)
          {
              if(arr[i][j]==0) dp[i][j]=0;
              else (dp[i][j]+= dp[i+1][j]+dp[i][j+1]) %=INF;
          }
     }
     loop(i,0,n){
         loop(j,0,n){
            cout<<dp[i][j]<<" ";
         }
         cout<<endl;
     }
     
     cout<<dp[0][0]<<endl;
     
}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}