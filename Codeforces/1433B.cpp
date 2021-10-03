#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr(n);
     loop(i,n){
         cin>>arr[i];
     }
     int lid=0,rid=0;
     for (int i = 0; i < n; i++)
     {
        if(arr[i]==1){
            lid = i;
            break;
        }
     }
     for (int i = n-1; i > 0; i--)
     {
        if(arr[i]==1){
            rid = i;
            break;
        }
     }
     int ans=0;
     for (int i = lid; i <=rid; i++)
     {
         if(arr[i]==0){
             ans++;
         }
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