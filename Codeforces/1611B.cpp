#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll x,y;
     cin>>x>>y;
    //  if(x==0&&y==0){
    //      cout<<"0\n";
    //      return;
    //  }
    //  if((x<=2&&y<2)||(y<=2&&x<2)){
    //      cout<<"0\n";
    //      return;
    //  }
    //  if(x==0||y==0){
    //      cout<<"0\n";
    //      return;
    //  }
    //  if(x<=4&&y<=4){
    //      cout<<"1\n";
    //      return;
    //  }
    //  if((x<=4&&y>4)||(x>4&&y<=4)){
    //      ll a = min(x,y);
    //      ll b = max(x,y);
    //      ll res = b/3;
    //      if(res>a){
    //          cout<<a<<endl;
    //          return;
    //      }
    //      else cout<<res<<endl;
    //  }
    //  cout<<(x+y)/4<<endl;
    cout<<min((x+y)/4,min(x,y))<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}