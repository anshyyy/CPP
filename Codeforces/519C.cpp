#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
 int n,m,ans;
void solve(){ 
     cin>>n>>m;
    for (int i = 0; i <=n; i++)
    {
       int cur = i;
        int leftn = n - i;
        int leftm = m - 2 * i;
 
        if (leftm >= 0) {
            cur += min(leftm, leftn / 2);
            ans = max(ans, cur);
        }
    }
    cout<<ans<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}