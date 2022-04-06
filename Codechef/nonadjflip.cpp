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
     ll n;cin>>n;
     string s;cin>>s;
     if(all_of(all(s),[&](int i){return i ==s[0]&&s[0]=='0';})){
         cout<<"0\n";
         return;
     }
     bool ok = false;
     loop(i,0,n-1){
         if(s[i]==s[i+1]&&s[i]=='1'){
               ok = true;
         }
     }
     if(ok)cout<<"2\n";
     else cout<<"1\n";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}