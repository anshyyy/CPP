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
     ll n;cin>>n;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     int j = 0;
     ll ans = 0;
   //  cout<<(ll)pow(2,40);
     for (ll i = (ll)pow(2,arr[0]); i < 1099511627777; i++)
     {
         ll zz = __builtin_ctzll(i);
         if(zz == arr[j]){
           ans = i;
           j++;
         } 
         if(j==n) break;
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