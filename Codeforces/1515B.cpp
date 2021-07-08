#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
      ll n; cin >> n;
  bool is = false;
  if (n % 2 == 0)
  {
    ll x = n / 2;
    ll sq = sqrt(x);
   //  cout<<sq<<endl;
    if (sq * sq == x)is = true;
  }
  if (n % 4 == 0)
  {
    ll x = n / 4;
    ll sq = sqrt(x);
   // cout<<sq<<endl;
    if (sq * sq == x)is = true;
  }
  cout << (is ? "YES\n" : "NO\n");
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}