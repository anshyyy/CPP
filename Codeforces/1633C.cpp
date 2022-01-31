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
     ll hc,dc,hm,dm,a,w,k;
     cin>>hc>>dc>>hm>>dm>>k>>w>>a;
     bool ff = false;
    for (int i = 0; i <= k; i++) {
      int H = hc + i * a;
      int D = dc + (k - i) * w;
      int x = (hm + D - 1) / D;
      int y = (H + dm - 1) / dm;
      if (x <= y) {
         ff = true;
         break;
      }
   }
    
     if(!ff) cout<<"NO\n";
     else cout<<"YES\n";


}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}