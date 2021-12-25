#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
   string x;
  cin >> x;
  int s=0,c=0;
  for(auto &nx : x){s+=(nx-'0');}
  string res;
  for(int i=x.size()-1;;i--){
    c+=s;
    res.push_back('0'+(c%10));
    c/=10;
    if(i>=0){s-=(x[i]-'0');}
    if(i<=0 && c==0){break;}
  }
  reverse(res.begin(),res.end());
  cout << res << '\n';
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}