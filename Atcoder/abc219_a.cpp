#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int x;
     cin>>x;
     int ans=0;
     if(x>=0 && x<40){
         ans=40-x;
     }
     else if(x>=40 && x<70){
         ans=70-x;
     }
     else if(x>=70 && x<90){
         ans=90-x;
     }
     else {
         cout<<"expert\n";
         return;
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