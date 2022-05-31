#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,k;
     cin>>n>>k;
     string s;cin>>s;
     ll ans = 0;
     loop(i,2,n){
         if(s[i]<s[i-1]&&s[i]<s[i-2]&&k>0){
             swap(s[i-1],s[i]);
             k--;
         }
         else if((s[i-1]<s[i]&&s[i-2]<s[i])&&k>0){
             swap(s[i-1],s[i-2]);
             k--;
         }
         if(k==0)break;
     }
     loop(i,0,n-1){
         ans+= (s[i]-'0')*10 + (s[i+1]-'0');
     }
     cout<<ans<<endl;
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}