#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     vector<ll>arr(n);
     for(auto &i : arr)cin>>i;
     ll max=-1,ans=0;
     for (int i = n-1; i >0; i--)
     {
         if(max<arr[i]){
             max=arr[i];
             ans++;;
         }
     }
     if(arr[0]>=max) cout<<ans<<endl;
     else cout<<"-1\n";
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}