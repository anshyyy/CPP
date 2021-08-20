#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int a,b,c,n,p=0;
     cin>>n>>a>>b>>c;
     for (int i = 0; i*a <=n; i++)
     {
         for (int j = 0; i*a+j*b <=n; j++)
         {
             int k=(n-i*a-j*b)/c;
             if(i*a+j*b+k*c==n){
                 p=max(i+j+k,p);
             }
         }
         
     }
     cout<<p<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}