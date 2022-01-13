#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     bool flag = true,flag1=true;
     set<ll>s;
     for (int i = 0; i < n; i++)
     {
         while(arr[i]>n){
             arr[i]/=2;
         }
         while(s.find(arr[i])!=s.end()){
             arr[i]/=2;
         }
         if(arr[i]==0) flag = false;
         else s.insert(arr[i]);
     }
      sort(arr.begin(),arr.end());
      for (int i = 0; i <n; i++)
      {
          if(arr[i]!=i+1){
              flag1= false;
              break;
          }
      }
      if(!flag||!flag1) cout<<"NO\n";
      else cout<<"YES\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}