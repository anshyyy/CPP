#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll a,b,x,y,n;
     cin>>a>>b>>x>>y>>n;
    if (max(a - n, x) > max(b - n, y)) {
      swap(a, b);
      swap(x, y);
    }
    ll na = max(a - n, x);
    ll sa = a - na;
    n = max(n - sa, 0LL);
    a = max(na, x);
    ll nb = max(b - n, y);
    ll sb = b - nb;
    n = max(n - sb, 0LL);
    b = max(nb, y);
    cout << a * b << endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}