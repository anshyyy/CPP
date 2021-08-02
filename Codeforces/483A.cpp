#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
void solve(){ 
     ll l,r,i,j,x,y;
     cin>>l>>r;
     if(r-l+1<3){
         cout<<"-1\n";
         return;
     }
     if(l%2==0){
          cout<<l<<" "<<l+1<<" "<<l+2<<endl;
          return;
     }
     if(r-l+1>3){
          cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
          return;
     }
     cout<<"-1\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}