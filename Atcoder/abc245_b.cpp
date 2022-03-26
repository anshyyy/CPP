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
     vector<int>arr(n);
     map<ll,ll>mp;
     loop(i,0,n){
         cin>>arr[i];
         mp[arr[i]]++;
     }
     ll ans = 0;
     for (int i = 0; i <n; i++)
     {
         if(mp.find(ans)!=mp.end()){
             ans++;
         }
         else break;
     }
     cout<<ans<<endl;
     
     
}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}