#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
    ll x,y,z;
    cin>>x>>y>>z;
    if((y-x)==(z-y)||(x==y)&&(y==z)){
        cout<<"YES\n";
    }
    else if((2*y-z)%x==0&&2*y-z>0){
        cout<<"YES\n";
    }
    else if((2*y-x)%z==0&&2*y-x>0){
        cout<<"YES\n";
    }
    else if((x+z)%(2*y)==0){
        cout<<"YES\n";
    }
    else cout<<"NO\n";

     


}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}