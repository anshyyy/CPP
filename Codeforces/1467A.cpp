#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     if(n==1)cout<<"9\n";
     else if(n==2) cout<<"98\n";
     else if(n==3) cout<<"989\n";
     else{
         cout<<"989";
         for(int i =3;i<n;i++){
             cout<<((i-3)%10);
         }
         cout<<endl;
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