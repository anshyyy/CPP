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
 vector<double>arr;
 double dp[3001][3001];
double rec(int level ,int head){
    if(head ==0) return 1;
    if(level==0) return 0;
    if(dp[level][head] > -0.9){
        return dp[level][head];
    }
    return dp[level][head]=arr[level]*rec(level-1,head-1) + (1-arr[level])*rec(level-1,head);
}
void solve(){
     memset(dp,-1,sizeof(dp)); 
     int n;
     cin>>n;
     arr.resize(n+1);
     loop(i,1,n+1)cin>>arr[i];
     cout<<fixed<<setprecision(10)<<rec(n,(n+1)/2);
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