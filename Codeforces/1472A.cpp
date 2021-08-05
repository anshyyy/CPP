#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,w,h,count=1;
     cin>>w>>h>>n;
     while (w%2==0)
     {
         w/=2;
         count*=2;
     }
     while(h%2==0){
         h/=2;
         count*=2;
     }
     cout<<(count>=n?"YES\n":"NO\n");
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}