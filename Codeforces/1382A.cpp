#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n,m;
     cin>>n>>m;
     vector<int>a(n),b(m);
     loop(i,0,n)cin>>a[i];
     loop(i,0,m)cin>>b[i];
     for(int i = 0;i<n;i++){
         for(int j =0;j<m;j++){
             if(a[i]==b[j]){
                 cout<<"YES\n"<<1<<" "<<a[i]<<endl;
                 return;
             }
           //  else break;
         }
     }
     cout<<"NO\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}