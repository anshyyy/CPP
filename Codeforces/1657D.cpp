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
     ll n,m,c;
     cin>>n>>c;
     vector<ll>kill(c+1,0);
     while (n--)
     {
         ll ci,hi,di;
         cin>>ci>>hi>>di;
         kill[ci] = max(kill[ci],hi*di);
     }
     for (int i = 1; i <=c; i++)
     {
          ll ct = i;
          for (int j = 1; j*ct <= c; j++)
          {
              kill[j*ct] = max(kill[j*ct],j*kill[i]);
          }
     }
     for (int i = 1; i <=c; i++)
     {
          kill[i] = max(kill[i],kill[i-1]);
     }
     cin>>m;
     for (int i = 0; i < m; i++)
     {
         ll H,D;
         cin>>H>>D;
         auto it = upper_bound(all(kill),H*D);
         if(it==kill.end()){
             cout<<"-1\n";
         }
         else {
             cout<<it-kill.begin()<<" ";
         }
     }
     
}
int main() {
int t=1;
// cin>>t;
while(t--){
 solve(); 
}
     return 0;
}