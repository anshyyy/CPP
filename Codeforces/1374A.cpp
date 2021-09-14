#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll x,y,n;
     cin>>x>>y>>n;
     if(y==0&&n<x){
         cout<<"0\n";
         return;
     }
     if(n-n%x+y<=n)
        cout<<n-(n%x)+y<<endl;
    else
       cout<<n-n%x-(x-y)<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}