#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     if(n<3){
         cout<<"NO\n";
         return;
     }
     sort(arr.begin(),arr.end());
     for(int i=0;i<n-2;i++){
         if(arr[i]+arr[i+1]>arr[i+2]){
             cout<<"YES\n";
             return;
         }
     }
     cout<<"NO\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}