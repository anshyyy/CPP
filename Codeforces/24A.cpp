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
     vector<bool>s(n+1,0),e(n+1,0);
     int total = 0, res =0;
     for(int i = 0;i<n;i++){
         int a,b,c;
         cin>>a>>b>>c;
         total += c;
         if(s[a]||e[b]){
             res+=c;
             s[b]=true;
             e[a]=true;
         }
         else{
             s[a]=true;
             e[b]=true;
         }
     }
     cout<<min(res,total-res)<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}