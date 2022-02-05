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
     ll n,m;
     cin>>n>>m;
     ll arr[n][m];
     loop(i,0,n)
         loop(j,0,m)cin>>arr[i][j];
        
    loop(i,0,m){
        loop(j,0,n){
          cout<<arr[j][i]<<" ";}
    cout<<endl;
    }
     
}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}