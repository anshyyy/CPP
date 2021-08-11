#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll x,y,n,k;
     cin>>y>>k>>n;
     x=y+k-(y%k);
     if(x>n){
         cout<<"-1\n";
     }
     else{
         cout<<x-y<<" ";
     for (ll i=x+k; i<=n; i+=k)
     {
             cout<<i-y<<" ";
     }
     }
     cout<<endl;
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