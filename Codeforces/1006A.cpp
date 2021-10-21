#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(ll i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     loop(i,0,n){
         if(arr[i]&1){
             cout<<arr[i]<<" ";
         }
         else cout<<arr[i]-1<<" ";
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