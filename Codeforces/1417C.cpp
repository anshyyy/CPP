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
     int n;cin>>n;
     vector<vector<int>>ind(n);
     vector<int>arr(n);
     for (int i = 0; i < n; i++)
     {
          cin>>arr[i];
          --arr[i];
          ind[arr[i]].push_back(i);
     }
     // for(auto i : ind){
     //     for(int j : i){
     //         cout<<j<<" ";
     //     }
     //     cout<<endl;
     // }
     vector<int> ans(n+2,n+1);
     for(int i =0;i<n;i++){
          int start = -1;
          int maxi = 0;
          for(int j : ind[i]){
               maxi = max(maxi,j-start);
               start = j;
          }
          maxi = max(maxi,n-start);
          ans[maxi]=min(ans[maxi],i);
     }
     for(int i =0;i<n+2;i++){
          cout<<i<<" "<<ans[i]<<endl;
     }
     int mini = n+n;
     for(int i =1;i<=n;i++){
          mini = min(mini,ans[i]);
          if(mini>=n)cout<<"-1"<<" ";
          else cout<<(mini+1)<<" ";
     }
     cout<<endl;
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