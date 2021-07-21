#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,p=0,q=0,r=0;bool flag=true;
     cin>>n;
     while(n--){
         int x,y,z;
         cin>>x>>y>>z;
         p+=x;
         q+=y;
         r+=r;
     }
      if(p+q+r!=0)flag=false;
         cout<<p<<q<<r<<endl;
     flag?cout<<"YES\n":cout<<"NO\n";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}