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
     vector<ll>arr;
     for (ll i = 1; i <=100002; i++)
     {
         ll x = i*(i+1);
         arr.push_back(x/2);
     }
     ll n;cin>>n;
     for (ll i = 1; i <= 100003; i++)
     {
         if(n-arr[i-1]<0){
             cout<<"NO\n";
             return;
         }
         ll x = n - arr[i-1];
         auto it = lower_bound(all(arr),x);
         if(*it == x){
             cout<<"YES\n";
             return;
         }
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