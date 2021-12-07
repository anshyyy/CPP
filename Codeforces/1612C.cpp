#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll k ,x;
     cin>>k>>x;
     ll ans = 0;
     ll l = 1,r=2*k-1;
     ll total = k*k;
     while(l<=r){
         ll mid = (l+r)/2;
         ll req = 0;
         if(mid>k){
             ll diff = mid-k;
             ll val = k-diff;
             req = total-(val*(val+1))/2;
         }
         else req = (mid*(mid-1))/2;
         if(x>req){
             ans = mid;
             l = mid+1;
         }
         else r = mid -1;
     }
     cout<<ans<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}