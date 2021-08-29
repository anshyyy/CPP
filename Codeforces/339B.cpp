#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,m;
     cin>>n>>m;
     ll ans=0;int loc=1;
     for (int i = 0; i <m; i++)
     {
        int now;
        scanf("%d", &now);

        if(now >= loc)
            ans += now - loc;
        else
            ans += n - (loc - now);
        loc = now;
     }
     cout<<ans<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}