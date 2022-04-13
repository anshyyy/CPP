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
     if(n%2){
         cout<<"NO\n";
         return;
     }
     ll o = 0,z=0;
     for (int i = 0; i < n; i++)
     {
         if(s[i]=='0')z++;
         else o++;
     }
     if(z==o){
         cout<<"YES\n";
         cout<<1<<" "<<n<<endl;
     }
     else if(z<o){
         ll zx = z;
         string zz = "";
         while(zx--) zz+='1';
         ll l = s.find(zz);
         if(l!=-1){
             cout<<"YES\n"<<l+1<<" "<<l+z<<endl;
         }
     }
     else if(o<z){
         ll ox = o;
         string oo = "";
         while(ox--)oo+='0';
         ll l = s.find(oo);
          if(l!=-1){
             cout<<"YES\n"<<l+1<<" "<<l+o<<endl;
         }
     }
     else cout<<"NO\n";

     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}