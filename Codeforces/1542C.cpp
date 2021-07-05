#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
#define MOD 1000000007
void solve(){ 
     ll n;
     cin>>n;
     ll res=0;
     ll lcm=1;
     for (ll i = 2;; i++)
     {
       if(lcm>n) break;
       ll l=n/lcm;
       lcm=(lcm/__gcd(i,lcm))*i;
       ll r=n/lcm;
       ll v=((l-r)*i)%MOD;
       res=(res+v)%MOD;
     }
     cout<<res<<endl;
}
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}