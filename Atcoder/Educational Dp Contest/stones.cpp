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
     int n,k;cin>>n>>k;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     vector<int>dp(k+1);
     dp[0]=0;
     for (int i = 1; i <= k; i++)
     {
        dp[i]=0;
        for (int j = 0; j < n; j++)
        {
            if(i-arr[j]>=0 && dp[i-arr[j]]==0){
                dp[i]=1;
                break;
            }
        }
     }
     if(dp[k])cout<<"First\n";
     else cout<<"Second\n";
     
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