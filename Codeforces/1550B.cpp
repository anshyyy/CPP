#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
using namespace std;
void solve(){ 
     int n,a,b,count=1,l=0;
     cin>>n>>a>>b;
     string s;
     cin>>s;
      vector<int> v;
   for (int i = 0; i < n; i++) {
      int j = i;
      while (j < n && s[i] == s[j]) {
         j++;
      }
      v.push_back(j - i);
      j--;
      i = j;
   }
   if(b>=0)
     cout<<n*(a+b)<<endl;
    else{
          int ans = 0, sr = 0;
      int len = 0;
      int nn = v.size();
      for (int i = 1; i < nn; i += 2) {
         sr += a * v[i] + b;
         len += v[i];
      }
     // cout<<sr<<endl;
      sr += (n - len) * a + b;
      ans = sr;
     //  cout<<ans<<endl;
      sr = 0, len = 0;
      for (int i = 0; i < nn; i += 2) {
         sr += a * v[i] + b;
         len += v[i];
      }
      sr += (n - len) * a + b;
     //  cout<<sr<<endl;
      ans = max(ans, sr);
      cout << ans << endl;
    }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}