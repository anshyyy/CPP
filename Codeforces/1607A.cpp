#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string p,s;
     cin>>p>>s;
     vector<int>res(26,0);
     for (int i = 0; i < 26; i++)
     {
         res[(int)(p[i]-'a')]=i+1;
     }
     int count = 0;
     int pres = res[(int)(s[0]-'a')];
     for (int i = 0; i < s.size(); i++)
         {
             int x = res[(int)(s[i]-'a')];
             count = count + abs(pres - x);
             pres = res[(int)(s[i]-'a')];
         }
    cout<<count<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}