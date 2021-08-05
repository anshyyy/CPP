#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,k;
     cin>>n>>k;
     ll a=n-k;
     if(k>a){
         cout<<"YES\n";
     }
     else cout<<"NO\n";

}
int main() {
IOS
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}