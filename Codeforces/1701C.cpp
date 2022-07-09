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
bool isPossible(vector<ll>&arr,vector<ll>&freq,ll mid,ll m){
    ll n = arr.size();
    ll left = 0,help=0;
    for(ll i =1;i<=m;i++){
        if(mid>freq[i]){
            help += (mid-freq[i])/2;
        }
        else{
            left += freq[i] - mid;
        }
    }
    return help>=left;
}
void solve(){ 
     ll m,n;
     cin>>m>>n;
     vector<ll>arr(n+1,0);
     vector<ll>freq(n+1,0);
     loop(i,1,n+1){
        cin>>arr[i];
        freq[arr[i]]++;
     }
     ll ans = 0;
     ll low = 1, high = 2*n;
     while(low<=high){
        ll mid = low + (high-low)/2;
        if(isPossible(arr,freq,mid,m)){
            ans = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
     }
    cout<<ans<<endl;
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