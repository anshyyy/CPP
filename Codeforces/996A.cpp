#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n,ans=0;
     cin>>n;
     int arr[]={100,20,10,5,1};
     for(int i =0;i<5;i++){
         ans+=n/arr[i];
         n=n%arr[i];
     }
     cout<<ans<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}