#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll a,b,c;
     cin>>a>>b>>c;
     if(a==b&&b==c){
         cout<<1<<" "<<1<<" "<<1<<endl;
         return;
     }
    //  ll maxi = max({a,b,c});
    //  if(a==maxi){
    //      cout<<maxi-a<<" ";
    //  }
    //  else cout<<maxi-a+1<<" ";

    //  if(maxi==b)cout<<maxi-b<<" ";
    //  else cout<<maxi-b+1<<" ";

    //  if( maxi==c)cout<<maxi-c<<endl;
    //  else cout<<maxi-c+1<<endl;
    // cout<<(maxi-a+1)<<" "<<maxi-b+1<<" "<<maxi-c+1<<endl;
    cout << max(0LL,1+max(b,c)-a)<<" "<< max(0LL,1+max(a,c)-b)<<" "<< max(0LL,1+max(b,a)-c)<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}