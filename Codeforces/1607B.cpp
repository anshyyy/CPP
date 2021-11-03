#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     //	a(4t)=0, a(4t+1)=-(4t+1), a(4t+2)=1, a(4t+3)=4t+4
     ll x,n;
     cin>>x>>n;
     ll d =0;
     ll t = n/4;
     ll rem = n%4;
     if(rem == 1)
        d = 4*t +1;
    else if (rem ==2)
      d = -1;
    else if(rem ==3)
      d = -(4*t+4);
    if(x%2==0) d *=-1;
    cout<<x+d<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}