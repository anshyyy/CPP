#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
ll gcdsum(ll n){
    ll a = n,sum=0;
    while(a!=0){
        sum+=a%10;
        a/=10;
    }
    return ll(__gcd(n,sum));
}
void solve(){ 
     ll x;
     cin>>x;
     if(gcdsum(x)!=1)
     cout<<x<<endl;
     else if(gcdsum(x+1)!=1)
     cout<<x+1<<endl;
     else if(gcdsum(x+2)!=2)
     cout<<x+2<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}