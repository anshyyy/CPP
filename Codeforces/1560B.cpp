#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll a, b, c;
  cin >> a >> b >> c;
 
  ll pos = 2*abs(b-a);
  int ans = 0;
 
  if (b > pos|| a > pos || c > pos) {
    ans = -1;
  }
  else {
    ans = c + pos/2;
    if (ans > pos)
    {
      ans = c-pos/2;
    }
  }
 
  cout << ans<<endl;
}
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}