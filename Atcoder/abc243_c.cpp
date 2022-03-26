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
     vector<pair<ll,ll>>arr(n);
     loop(i,0,n){
         cin>>arr[i].first>>arr[i].second;
     }
     string s;cin>>s;
     vector<pair<pair<ll,ll>,char>>pxx,pyy;
     loop(i,0,n){
         pxx.push_back({{arr[i].first,arr[i].second},s[i]});
          pyy.push_back({{arr[i].second,arr[i].first},s[i]});
     }
     sort(all(pxx));
     bool can = false;
     bool cann = false;
     for(auto i = 0;i<n-1;i++){
       // cout<<xx.first.first<<" "<<xx.first.second<<" "<<xx.second<<endl;
        if(pxx[i].first.first==pxx[i+1].first.first&&pxx[i].second!=pxx[i+1].second){
            can = true;
            break;
        }
     }
     if(can) {
         cout<<"Yes\n";
         return;
     }
     sort(all(pyy));
     for (int i = 0; i < n-1; i++)
     {
          if(pyy[i].first.first==pyy[i+1].first.first&&pyy[i].second!=pyy[i+1].second){
            cann = true;
            break;
        }
     }
     if(cann) cout<<"Yes\n";
     else cout<<"No\n";
}
int main() {
IOS;
int t=1;
// cin>>t;
while(t--){
 solve(); 
}
     return 0;
}