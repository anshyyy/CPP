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
ll x,y;
ll get(ll n){
    ll u=0,v=0;
    while(x%n==0){
        x/=n;u++;
    }
    while(y%n==0){
        y/=n;v++;
    }
    return abs(u-v);
}
void solve(){ 
     ll ans = 0;
     cin>>x>>y;
     ans = get(2);
     ans+=get(3);
     ans+=get(5);
     cout<< ((x==y)?ans:-1);
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