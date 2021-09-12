#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,s;
     cin>>n>>s;
     if(n==1) cout<<s<<endl;
     else if(s==1) cout<<"0\n";
     else{
         int t;
         if(n%2==0){
             t=(s/((n/2)+1));
         }
         else t= s/(round(n/(2*1.0)));

         cout<<t<<endl;
     }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}