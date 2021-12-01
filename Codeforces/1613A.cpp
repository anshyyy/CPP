#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
    //  ll x1,x2;
    //  int p1,p2;
    //  cin>>x1>>p1>>x2>>p2;
    //  ll x = x1*(pow(10,p1));
    //  ll y = x2*(pow(10,p2));
    //  if(x>y){
    //      cout<<">"<<endl;
    //      return;
    //  }
    //  if(y>x){
    //      cout<<"<"<<endl;
    //      return;
    //  }
    //  if(y==x){
    //      cout<<"="<<endl;
    //      return;
    //  }
     string x1,x2;
     ll p1,p2;
     cin>>x1>>p1>>x2>>p2;
     while(p1--){
         x1+='0';
     }
     while(p2--){
         x2+='0';
     }
     ll x =stoi(x1);
     ll y = stoi(x2);
     if(x>y){
         cout<<">"<<endl;
         return;
     }
     if(y>x){
         cout<<"<"<<endl;
         return;
     }
     if(y==x){
         cout<<"="<<endl;
         return;
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