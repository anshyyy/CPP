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
     int n;
     cin>>n;
     int a,b,c;
     cin>>a>>b>>c;
     string s;cin>>s;
     string ans="";
     loop(i,0,n)ans+=' ';
    // cout<<ans<<" "<<ans.size()<<endl;
     int wins = 0;
     for(int i =0;i<n;i++){
         if(s[i]=='P'){
             if(c>0){
             ans[i]='S';
             c--;
             wins++;
             }
         }
         else if(s[i]=='R'){
             if(b>0){
             ans[i]='P';
             b--;
             wins++;
             }
         }
         else{
               if(a>0){
                   ans[i]='R';
                   a--;
                   wins++;
               }
         }
     }
     if(2*wins<n){
         cout<<"NO\n";return;
     }
     for(int i = 0;i<n;i++){
         if(ans[i]==' '){
             if(a>0){
                 a--;
                 ans[i]='R';
             }
             else if(b>0){
                 b--;
                 ans[i]='P';
             }
             else{
                 c--;
                 ans[i]='S';
             }
         }
     }
     cout<<"YES\n";
     cout<<ans<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}