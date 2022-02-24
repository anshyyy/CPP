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
     vector<ll>arr(n);
     vector<pair<ll,ll>>roads;
     loop(i,0,n)cin>>arr[i];
     if(all_of(all(arr),[&](const int i){return i == arr[0];})){
         cout<<"NO\n";
         return;
     }
     int id =-1;
     for (int i = 1; i < n; i++)
     {
         if(arr[i]!=arr[0]){
             id = i;
             roads.push_back({1,i+1});
         }
     }
     for (int i = 1; i < n; i++)
     {
         if(arr[i]==arr[0]){
             roads.push_back({id+1,i+1});
         }
     }
     cout<<"YES\n";
     for(auto x : roads) cout<<x.first<<" "<<x.second<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}