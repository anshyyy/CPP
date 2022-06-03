#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(ll i=a;i<n;i++)
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
bool isPossible(vector<ll>&arr,ll m,ll k){
    ll sum = arr[0]+m;
    for (ll i = 1; i < arr.size(); i++)
    {
        if(arr[i]*100 > sum*k) return false;
        sum+=arr[i];
    }
    return true;
    
}
void solve(){ 
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    loop(i,0,n)cin>>arr[i];
    ll l = 0,r=1e12;
    while(r>l){
        ll m = l + (r-l)/2;
        if(!isPossible(arr,m,k)){
            l = m+1;
        } else r = m;
    }
    cout<<l<<endl;
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