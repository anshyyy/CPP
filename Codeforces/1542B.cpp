#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     ll n,a,b;
    cin>>n>>a>>b;
    ll temp=1;
    bool check=false;
    while (temp<=n)
    {
         if((n-temp)%b==0){
              check=true;
         }
         temp*=a;
         if(a==1) break;
    }
    if(check) cout<<"Yes\n";
    else cout<<"No\n";
    

}
int32_t main() {
 ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}