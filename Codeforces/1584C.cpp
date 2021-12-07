#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int>a(n),b(n),c(n);
     loop(i,0,n)cin>>a[i];
     loop(i,0,n)cin>>b[i];
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     for (int i = 0; i < n; i++)
     {
        c[i]=b[i]-a[i]; 
     }
     for(int i = 0;i<n;i++){
         if(c[i]>=2||c[i]<0){
             cout<<"NO\n";
             return;
         }
         

     }
     cout<<"YES\n";
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}