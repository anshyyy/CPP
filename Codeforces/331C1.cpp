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
ll getMax(ll n){
    ll x = n;
    ll maxi = INT_MIN;
    while(x>0){
      ll rem = x%10;
      maxi = max(rem,maxi);
      x = x/10;
    }
    return maxi;
}
void solve(){ 
     ll n;cin>>n;
     ll cnt = 0;
     while(n!=0){
         n = n-getMax(n);
         cnt++;
     }
     cout<<cnt<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}