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
int dp[3001][3001];
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
void solve(){ 
     string s,t;
     cin>>s>>t;
     int n = s.size();
     int m = t.size();
  
     loop(i,0,n+1) dp[i][0]=0;
     loop(i,0,m+1)dp[0][i]=0;
     for (int i = 1; i <=n; i++)
     {
        for (int j = 1; j <=m; j++)
        {
             if(s[i-1]==t[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
             } else{
                dp[i][j] =max(dp[i-1][j],dp[i][j-1]);
             }
        }
        
     }
     int ans = dp[n][m];
     string lcs ="";
     int i=n,j=m;
     while(i>0 && j>0){
        if(s[i-1]==t[j-1]){
            lcs += s[i-1];
            i--;
            j--;
        } else{
            if(dp[i-1][j]>dp[i][j-1]) i--;
            else j--;
        }
     }
     reverse(all(lcs));
     cout<<lcs<<endl;
     
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