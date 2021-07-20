#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
   ll n;cin>>n;
	ll ans=0;
	for (ll i = 2; i * i <= n; i++) {
    ll j=i;
		while (n % j == 0) {
		  ans++;
			n /= j;
      j*=i;
		}
    while(n%i==0) n/=i;
	}
     cout<<ans+(n>1)<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
   return 0;
}