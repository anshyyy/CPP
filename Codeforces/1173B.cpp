#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,i,ans;
     cin>>n;
     ans= n/2 +1;
     cout<<ans<<endl;
     for (int i = 1; i <=ans; i++) cout<<"1 "<<i<<endl;
     for (int i = 2; i <=n-ans+1; i++) cout<<ans<<" "<<i<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}