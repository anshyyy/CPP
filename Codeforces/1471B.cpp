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
     ll n,q;
     cin>>n>>q;
     vector<pair<ll,ll>>pp;
     loop(i,0,n){
         ll x;cin>>x;
         pp.push_back({x,1});
     }
     ll sum =0;
     for (int i = 0; i < pp.size(); i++)
     {
         if(pp[i].ff%q==0){
             pp.push_back({pp[i].ff/q,q*pp[i].ss});
         }
         else break;
     }
    for(auto x : pp) sum+= x.ff*x.ss;
    cout<<sum<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}