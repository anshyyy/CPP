#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n;ll maxi=0;
     cin>>n;
     vector<ll>x(n),y(n);
     loop(i,n)cin>>x[i];
     loop(i,n) cin>>y[i];
     for (int i = 0; i <n; i++)
     {
       for(int j=i+1;j<n;j++){
            ll dx=x[i]-x[j],dy=y[i]-y[j];
             ll sq=(dx*dx)+(dy*dy);
        maxi=max(maxi,sq);
     }
    }
     cout<<maxi<<endl;
     
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}