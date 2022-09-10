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
     int n;
     cin>>n;
     vector<vector<int>> arr(n,vector<int>(3));
     for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
     }
     vector<vector<int>>dp(n,vector<int>(3)) ;
     dp[0][0]=arr[0][0] ,dp[0][1] = arr[0][1],dp[0][2]=arr[0][2];
     for (int i = 1; i <n; i++)
     {
        dp[i][0]=arr[i][0] + max(dp[i-1][1],dp[i-1][2]);
        dp[i][1]=arr[i][1] + max(dp[i-1][0],dp[i-1][2]);
        dp[i][2]=arr[i][2] + max(dp[i-1][1],dp[i-1][0]);
     }
     vector<int>ans = dp.back();
     cout<<max({ans[0],ans[1],ans[2]})<<endl;
           
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