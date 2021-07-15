#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define mod 998244353
using namespace std;
int power1(long long x, unsigned int y)
{
    int res = 1;   
    x = x % mod;
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1)
             res = (res*x) % mod;
        y = y>>1;
        x = (x*x)%mod;
    }
    return res;
}
void solve(){ 
     ll w,h;
     cin>>w>>h;
     ll tile=power1(2,w-1);
     ll tile2=power1(2,h-1);
     cout<<((tile*tile2)*4)%mod<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}