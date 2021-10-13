#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s,x;
     cin>>s>>x;
     reverse(s.begin(),s.end());
     reverse(x.begin(),x.end());
     int idx=0,idy=0;
      for (int i = 0; i < x.size(); i++)
     {
         if(x[i]=='1')
          idx =i;
     }
     for (int i = idx; i < s.size(); i++)
     {
         if(s[i]=='1')
          idy = i;
     }
    
     cout<<idy-idx<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}