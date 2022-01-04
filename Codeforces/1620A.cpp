#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     cout<<(count(s.begin(),s.end(),'N')==1?"NO\n":"YES\n");
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}