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
     ll x,n,m;
     cin>>x>>n>>m;
     bool can = false;
     m = 10*m;
     if(x-m<=0){
         cout<<"YES\n";
         return;
     }
     while(n--){
         x = (x/2)+10;
     }
    // cout<<x<<" ";
     x = x-m;
    // cout<<" "<<x;
     if(x<=0){
         cout<<"YES\n";
     }
     else cout<<"NO\n";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}