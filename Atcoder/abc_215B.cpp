#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long int ll;
using namespace std;
void solve(){ 
     ll n,v=1;
     cin>>n;
    for (int i = 60; i >=0; i--)
    {
        if(n&(1LL<<i)){cout<<i<<endl;break;}
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