#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     ll n = s.size();
     if(n==1){
         cout<<"0\n";
         return;
     }
     ll z = 0;
     ll o = 0;
     for(ll i = 0;i<n;i++){
         if(s[i]=='1') o++;
         else z++;
     }
     if(o==z) cout<<o-1<<"\n";
     else cout<<min(o,z)<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}