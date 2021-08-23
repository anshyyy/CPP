#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define mod 1000000007
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long int ll;
using namespace std;
void solve(){ 
   ll x,y,n,z,f;
	ll arr[7];
	cin>>x>>y>>n;
	arr[1]=(x+mod)%mod;
	arr[2]=(y+mod)%mod;
	arr[3]=(y-x+mod)%mod;
	arr[4]=(-x+mod)%mod;
	arr[5]=(-y+mod)%mod;
	arr[6]=(x-y+mod)%mod;
	if(n<=6) cout<<(arr[n]+mod)%mod;
	else{
		z=n%6;
		if(z==0) cout<<(arr[6]+mod)%mod;
		else cout<<(arr[z]+mod)%mod;
		
	}
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}