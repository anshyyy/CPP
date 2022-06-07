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
void solve(){ 
     ll n,k;cin>>n>>k;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     ll ans = 0;
     vector<ll>mod;
     for (int i = 0; i < n; i++)
     {
         ans+=arr[i]/k;
         mod.push_back(arr[i]%k);
     }
     sort(all(mod));
     ll start = 0;
     ll end = n-1;
     while(start<end){
         if(mod[start]+mod[end]>=k){
             ans++;
             start++;
             end--;
         } else start++;
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