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
ll n,k;
/*
we can also solve this O(n) by k + (k-1)/(n-1)
*/

bool isPossible(ll m){
    return m -m/n >=k;
}
void solve(){ 
     cin>>n>>k;
     ll l = 0;
     ll r = n*k;
     while(l+1<r){
         ll m = l + (r-l)/2;
         if(isPossible(m)){
             r = m;
         }
         else {
             l = m;
         }
     }
     cout<<r<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}