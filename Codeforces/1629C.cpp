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
     ll n;
     cin>>n;
     vector<ll>arr(n+1);
     vector<vector<ll>>pos(n+2);
     for (ll i = 1; i <= n; i++)
     {
        cin>>arr[i];
        pos[arr[i]].push_back(i);
     }
     ll l = 1;
     vector<ll>b;
     while(l<=n){
         ll mex = 0;
         ll r = l;
         for (; mex <=n+1; mex++)
         {
             auto it = lower_bound(pos[mex].begin(),pos[mex].end(),l);
             if(it==pos[mex].end()) break;
             r = max(r,*it);
         }
         b.push_back(mex);
         l = r +1;
     }
     cout<<b.size()<<"\n";
     for(auto it : b) cout<<it<<" ";
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