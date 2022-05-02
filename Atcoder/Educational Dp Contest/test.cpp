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
ll ans (string s){
    ll lz = 0;
    ll lo = 0;
    ll rz =0;
    for(auto i : s){
        if(i=='0') rz++;
    }
    ll ro =0;
    for(auto i : s){
        if(i=='1') ro++;
    }
    ll op = 0;
    for(auto i : s){
        if(i=='0'){
          op += lo*ro;
          lz++;
          rz--;
        }
        else{
            op+=lz*rz;
            lo++;
            ro--;
        }
    }
    return op;
}
void solve(){ 
     string s;cin>>s;
     cout<<ans(s)<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}