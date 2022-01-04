#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n,k;
     cin>>n>>k;
     if(k>((n+1)/2)){
         cout<<"-1\n";
         return;
     }
     int z = k;
     for(int i =1;i<=n;i++)
     {
         for (int j = 1; j <= n; j++)
         {
            if(i==j&&(i%2)&&(j%2)&&z>0){
                cout<<"R";
                z--;
            }
            else cout<<".";
         }
         cout<<"\n";
     }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}