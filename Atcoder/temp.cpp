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
     string res = "";
     ll n = s.size();
     ll xx = stoll(s,nullptr,10);
     //cout<<xx<<endl;
     if(xx<0){
       if(s[n-1]!='0'){
        for(ll i = 0 ;i<n-1;i++){
            res+=s[i];
        }
        ll a = (res[res.size()-1]-'0')+1;
        for(ll i = 0;i<(ll)res.size()-1;i++)
        cout<<res[i];
        cout<<a;
       }
       else {
           for(ll i = 0;i<(ll)s.size()-1;i++){
               cout<<s[i];
           }
       }
     }
     else {
         for(ll i =0;i<n-1;i++){
             cout<<s[i];
         }
     }
     cout<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}