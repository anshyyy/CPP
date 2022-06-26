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
long long waysToBuyPensPencils(int total, int cost1, int cost2) {
     long long way = 0;
      for(int i = 0;i<=total/cost1;i++){
          int pencil = total - cost1*i;
          way += (pencil/cost2) +1;
      }
      return way;
}
void solve(){ 
     ll a,b,c;
     cin>>a>>b>>c;
     ll ans = waysToBuyPensPencils(a,b,c);
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