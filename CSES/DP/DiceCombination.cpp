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
     vector<int>dp(n+1,0);
     dp[0]=1;// base case
     for(int i = 1;i<=n;i++){
         for (int j = 1; j <=6; j++)
         {
             if(j>i) continue; // checking that the call is not more than the sum itself
             (dp[i]+=dp[i-j])%=INF;
         }  
     }
    cout<<dp[n];
}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}