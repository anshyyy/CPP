#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
int log(int x) {
    return 32 - __builtin_clz(x) - 1;
}
int setBitNumber(int n)
{
 
    int k = (int)(log(n));
    return 1 << k;
}
void solve(){ 
     ll n;
     cin>>n;
    int msb=setBitNumber(n);
    cout<<msb-1<<endl;
     
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}