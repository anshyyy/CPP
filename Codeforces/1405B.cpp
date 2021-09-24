#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     ll curr=0;
     for(ll i=0;i<n;i++){
         ll x;
         cin>>x;
       curr = max(0LL,curr+x);
       //cout<<curr<<" ";
     }
    cout<<curr<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}