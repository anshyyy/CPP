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
      ll n;
      cin>>n;
      vector<ll>a(n),b(n-1);
      unordered_set<ll>s;
      loop(i,0,n)cin>>a[i],s.insert(a[i]);
      loop(i,0,n-1)cin>>b[i];
      sort(all(a));
      sort(all(b));
      ll ans = b[0]-a[1];
      for(auto i : b){
           if(s.count(i-ans)==0){
                ans = b[0]-a[0];
                break;
           }
      }
      if (ans<=0) cout<<b[0]-a[0]<<endl;
      else cout<<ans<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
      return 0;
}