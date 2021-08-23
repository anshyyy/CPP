#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     vector<ll> arr(n+1);
     for1(i,n)cin>>arr[i];
     vector<ll> b=arr;
     sort(b.begin(),b.end());
     for (ll i = 1; i <=n; i++)
     {
         arr[i]+=arr[i-1],b[i]+=b[i-1];
     }
     //cout<<arr[n]<<b[n]<<endl;
     ll q;
    cin>>q;
     while (q--)
     {
         ll ty,l,r;
         cin>>ty>>l>>r;
         if(ty==1){
              cout<<arr[r]-arr[l-1]<<endl;
         }
         else{
           cout<<b[r]-b[l-1]<<endl;
         }
     }
     
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}