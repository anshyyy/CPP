#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll l,r,k;
     cin>>l>>r>>k;
     if(l==r&&l>1){
         cout<<"YES\n";
     }
     else if(l==r&&l==1){
         cout<<"NO\n";
     }
     else{
         ll x = r-l+1;
         ll y = (r/2)-ceil((float)l/2)+1;
         if(k>=x-y){
             cout<<"YES\n";
         }
         else{
             cout<<"NO\n";
         }
     }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}