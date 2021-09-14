#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll a,b,c,d;
     cin>>a>>b>>c>>d;
     if(b>a){
         cout<<b<<endl;
         return;
     }
     if(c-d<0){
         cout<<"-1\n";
         return;
     }
     cout<<ceil((a-b)/(c-d))<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}