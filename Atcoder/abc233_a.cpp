#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll a,b;
     cin>>a>>b;
     if(a>=b){
         cout<<"0\n";
         return;
     }
     ll c = b-a;
     cout<<ceil(double(c)/10)<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}