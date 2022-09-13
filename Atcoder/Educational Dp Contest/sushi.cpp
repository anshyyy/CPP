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
typedef long double ld;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
int n;
const int N = 301;
ld dp [N][N][N];
ld rec(ll zero,ll one,ll two,ll three){
    if(one+two+three == 0) return 0;
    ld &ans = dp[one][two][three];
    if(ans > -0.9) return ans;
    ans=n;
    if(one) ans += one*rec(zero+1,one-1,two,three);
    if(two) ans += two*rec(zero,one+1,two-1,three);
    if(three) ans+= three*rec(zero,one,two+1,three-1);
    ans /=(ld)(n-zero); 
    return ans;
}
void solve(){ 
    cin>>n;
    ll cnt[4]= {};
    memset(dp,-1,sizeof(dp));
    loop(i,0,n){
        ll x;cin>>x;
        cnt[x]++;
    }

    cout<<setprecision(10)<<fixed;
    cout<<rec(cnt[0],cnt[1],cnt[2],cnt[3])<<endl;
}
int main() {
IOS; 
int t=1;

while(t--){
 solve(); 
}
     return 0;
}