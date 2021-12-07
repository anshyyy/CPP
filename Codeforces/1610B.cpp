#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
bool ans;
int b[1000000],a[1000000];
int n, m;
void del_ele(int x){
    m=0;
    for (int i = 1; i <= n; i++)
        if(a[i]!=x)
           b[++m]=a[i];
  //  for(int i = 0;i<m;i++)cout<<b[i]<<" ";
    for (int i = 1; i <= m; i++)
        if(b[i]!=b[m+1-i])
            return;
    ans = true;
}
void solve(){ 
     cin>>n;
     ans = true;
     loop(i,1,n+1)cin>>a[i];
     if(n<=2){
         cout<<"YES\n";
         return;
     }
    for (int i = 1; i <=n; i++)
    {
        if(a[i]!=a[n+1-i]){
            ans = false;
            del_ele(a[i]);
            del_ele(a[n+1-i]);
            break;
        }
    }
    if(ans)cout<<"YES\n";
    else cout<<"NO\n";
    

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}