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
     ll n;
     cin>>n;
     vector<pair<ll,ll>>arr(n);
     map<ll,ll>mx,my;
     map<pair<ll,ll>,ll>mp;
     ll cnt = 0;
     loop(i,0,n){
        ll x,y;
         cin>>x>>y;
         cnt+=mx[x]++;
         cnt+=my[y]++;
         cnt-=mp[{x,y}]++;

     }
     cout<<cnt<<endl;
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