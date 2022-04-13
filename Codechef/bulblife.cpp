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
     int n,x;cin>>n>>x;
     vector<int>arr(n-1);
     loop(i,0,n-1)cin>>arr[i];
     ll sum = accumulate(all(arr),0LL);
     ll ans = x*n - sum;
    // cout<<sum<<" "<<ans<<endl;
     if(ans<=0)cout<<"0\n";
     else cout<<ans<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}