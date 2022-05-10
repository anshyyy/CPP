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
bool check(ll mid,vector<ll>&arr,ll h){
    ll hit = 0;
     loop(i,1,arr.size()){
             hit+= min(arr[i]-arr[i-1],mid);
         }
         hit+=mid;
         return hit>=h;
}
void solve(){ 
     ll n,h;
     cin>>n>>h;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     ll l = 0;
     ll r= 1e18;
     ll mid = 0;
     while (l+1<r)
     {
         mid = (l+r)/2;
         if(check(mid,arr,h)){
             r = mid;
         }
         else l = mid;
     }
     cout<<r<<endl;
     
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