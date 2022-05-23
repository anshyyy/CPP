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
ll get_size(ll num){
    string s = to_string(num);
    return s.size();
}
ll get_max(ll num){
    string s = to_string(num);
    ll mm = *max_element(all(s));
    return ll(mm-'0');
}
void solve(){ 
     ll n,x;cin>>n>>x;
     if(x==1&&n>1){
         cout<<"-1\n";
         return;
     }
     ll count = 0;
     while(get_size(x)!=n){
        ll y= get_max(x);
        cout<<x<<" "<<y<<" "<<x*y<<endl;
        x = x*y;
        count++;
     }
     //cout<<x<<endl;
     cout<<count<<endl;
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