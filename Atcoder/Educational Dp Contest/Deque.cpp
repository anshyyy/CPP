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
ll n;
const int N = 3001;
ll arr[N];
ll dp[N][N][2];
// we are only considering the scores of Taro
ll rec(int i,int j,int turn){
    //Pruning
    if(i>j) return 0;
    if(i==j){
        return !turn?arr[i]:0;
    }
    //cache
    if(dp[i][j][turn]!=-1){
        return dp[i][j][turn]; 
    }
    ll ans = 0;
    if(turn == 0){
        ans = max(arr[i]+rec(i+1,j,1-turn),arr[j]+rec(i,j-1,1-turn));
    } else{
        ans = min(rec(i+1,j,1-turn),rec(i,j-1,1-turn));
    }
    return dp[i][j][turn]=ans;
}
void solve(){ 
     cin>> n;
     ll sum =0;
     loop(i,0,n){
        cin>>arr[i];
        sum+=arr[i];
     }
     memset(dp,-1,sizeof(dp));
     ll X = rec(0,n-1,0);
     ll Y = sum-X;
     cout<<X-Y<<endl;
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