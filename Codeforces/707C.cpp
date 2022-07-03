#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n;cin>>n;
     if(n<3){
        cout<<"-1\n";
        return;
     }
     if(n%2){
       ll a = n;
       n = n*n;
       ll b = n/2;
       ll c = n/2 + 1;
       if(a*a + b*b > c*c){
        cout<<"-1\n";
        return;
       }
       cout<<b<<" "<<c<<endl;
     } else {
        ll a = n;
        ll b = (n/2)*(n/2) - 1;
        ll c = (n/2)*(n/2) + 1;
         if(a*a + b*b > c*c){
        cout<<"-1\n";
        return;
       }
       cout<<b<<" "<<c<<endl;
     }

}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}