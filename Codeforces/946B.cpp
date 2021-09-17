#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll a,b;
     cin>>a>>b;
     while((a>=(2*b)||b>=(2*a))&&a!=0&&b!=0){
         if(a>=2*b){
             a=a%(2*b);
         }
         else if(b>=2*a){
             b=b%(2*a);
         }
     }
     cout<<a<<" "<<b<<endl;
}
int main() {
int t=1;
while(t--){
 solve(); 
}
     return 0;
}