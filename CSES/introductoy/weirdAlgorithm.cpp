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
     ll n;
     cin>>n;
     cout<<n<<" ";
     while(n!=1){
         if(n%2==0){
             n=n/2;
             cout<<n<<" ";
         }
         else {
             n= (n*3)+1;
             cout<<n<<" ";
         }
     }
}
int main() {
IOS;
int t=1;

while(t--){
 solve(); 
}
     return 0;
}