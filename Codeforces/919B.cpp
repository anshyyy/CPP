#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
int cum(int n){
    int ans=0;
    while(n){
        ans+=n%10;
        n=n/10;
    }
    return ans;
}
void solve(){ 
     int n,sum=0;
     cin>>n;
     int ans=0;
     while(n){
       ans++;
       if(cum(ans)==10) n--;
     }
     cout<<ans<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}