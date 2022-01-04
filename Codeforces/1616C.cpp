#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<=n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n,ans=1;
     cin>>n;
     vector<int>arr(n+1);
     loop(i,1,n)cin>>arr[i];

     loop(i,1,n){
         loop(j,i+1,n){
             int x =0;
             loop(k,1,n)
                 if(k==i||k==j||(arr[k]-arr[i])*(k-j)==(arr[k]-arr[j])*(k-i))x++;
                 ans = max(ans,x);
         }
     }
         cout<<n-ans<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}