#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll a,b,c;
     cin>>a>>b>>c;
     ll ans = ((a+c)-(2*b));
     if (ans%3==0)cout<<"0\n";
     else cout<<"1\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}