#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)cin>>i;
  ll sum=0,need=0;
  for(int i=0;i<n;i++)
  {
      need+=i;
      sum+=a[i];
      if(sum<need){
          cout<<"NO\n";
          return;
      }
  }
  cout<<"YES\n";
}
int main() {
     int t;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
}