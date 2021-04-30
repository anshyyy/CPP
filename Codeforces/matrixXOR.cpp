#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     IOS;
     int t;
     cin>>t;
     
     while (t--)
     {
         ll n,m,k;
         cin>>n>>m>>k;
         ll ans=0;
         for(ll i=1;i<=n;i++){
             if(min(i,m)%2==1){
                 ans^=k+i+1;
             }
         }
         for(ll j=2;j<=m;j++){
             if(min(n,m-j+1)%2==1){
                 ans^=k+n+j;
             }
         }
         cout<<ans<<endl;
     }
     
     return 0;
}