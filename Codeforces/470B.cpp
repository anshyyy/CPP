#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,k;
     cin>>n>>k;
     if(k==1){
         cout<<n*(n-1)/2<<" "<<n*(n-1)/2<<endl;
         return;
     }
     ll maxi=(n-k+1)*(n-k)/2;
     ll left=n%k;
     ll other=n/k;
     ll ans1=other*(other-1)/2;
     ll ans2= ((other+1)*other)/2;
     ll ans3=(ans1*(k-left))+(ans2*(left));
     cout<<ans3<<" "<<maxi<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}