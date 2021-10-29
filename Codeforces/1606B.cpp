#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,k;
     cin>>n>>k;
    ll xx=1;
    ll rem=0;
    while(xx<=k && xx<n){
        xx*=2;
        rem++;
    }
    if(xx<n)
        rem+=(n-xx+k-1)/k;
    cout<<rem<<endl;
     
}
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}