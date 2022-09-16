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
const ll mod = 998244353;
using namespace std;
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
ll n,m,a,b,c,d,e,f;
ll dp[301][301][301];
set<pair<ll,ll>>s;
ll rec(int x,int y,int z){
    ll xx = x*a + y*c + z*e;
    ll yy = x*b + y*d + z*f;
    if(s.find({xx,yy})!=s.end()){
        return 0;
    }
    if(x+y+z == n){
        return 1;
    }
    if(dp[x][y][z]!=-1) return dp[x][y][z];
    ll ans = 0;
    for(int i=1;i<=3;i++){
        if(i==1) ans=(ans+rec(x+1,y,z))%mod;
        if(i==2) ans=(ans+rec(x,y+1,z))%mod;
        if(i==3) ans=(ans+rec(x,y,z+1))%mod;
        
    }
    return dp[x][y][z]=ans;
    
 }
void solve(){
    memset(dp,-1,sizeof(dp));
    s.clear();
    cin>>n>>m;
    cin>>a>>b>>c>>d>>e>>f;
    for (int i = 0; i < m; i++)
    {
        ll a,b;cin>>a>>b;
        s.insert({a,b});
    }
    cout<<rec(0,0,0)<<endl;
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