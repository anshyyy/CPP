#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll a,b,c,mm;
     cin>>a>>b>>c>>mm;
     vector<ll>arr={a,b,c};
     sort(arr.begin(),arr.end());
     if(mm>((a-1)+(b-1)+(c-1))){
         cout<<"NO\n";
     }
     else{
         ll x=arr[2]-(arr[1]+arr[0]+1);
         if(mm>=x){
             cout<<"YES\n";
         }
         else{
             cout<<"NO\n";
         }
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