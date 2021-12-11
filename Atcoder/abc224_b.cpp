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
     int a[n+1][m+1];
     loop(i,1,n+1)
       loop(j,1,m+1)
          cin>>a[i][j];

     for (int i = 1; i <=n; i++)
     {
         for (int i2 = i+1; i2 <=n; i2++)
         {
             for (int j = 1; j <=m; j++)
             {
                 for (int j2 = j+1; j2 <=m; j2++)
                 {
                     if(a[i][j]+a[i2][j2]>a[i2][j]+a[i][j2]){
                         cout<<"No\n";
                         return;
                     }
                 }
                 
             }
             
         }
         
     }
     cout<<"Yes\n";
     

}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}