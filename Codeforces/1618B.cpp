#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;

void solve(){ 
     int n;
     cin>>n;
     string s;
     cin>>s;
     for (int i = 1; i < n-2; i++)
     {
          string t;
          cin>>t;
          if(s[s.size()-1]==t[0]){
               s+=t[1];
          }
          else s+=t;
         
     }
      if(s.size()<n)s+='b';
     cout<<s<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}