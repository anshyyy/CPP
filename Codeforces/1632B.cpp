#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     if(n==2){
         cout<<"0 1\n";
     }
     else if(n==3){
         cout<<"2 0 1\n";
     }
     else{
     ll i = 1;
     ll x = 2;
     while(x<=n){
         x=x*2;
         i++;
     }
     cout<<x<<endl;
     if((n&n-1)==0)
     x/=2;
     x/=2;
     cout<<x<<endl;
     for(int i = n-1;i>=x;i--){
         cout<<i<<" ";
     }
     cout<<"0 ";
     for(int i = x-1;i>=1;i--){
         cout<<i<<" ";
     }
     cout<<endl;
     }
}
int main() {
IOS
ll t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}