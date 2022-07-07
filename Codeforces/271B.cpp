#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
int isprime(int n){
   if(n<2) return false;
   for(int i=2;i*i<=n;i++){
    if(n%i==0) return false;
   }
   return true;
}
int getprime(int n){
    int x = n;
   while(true){
      if(isprime(x)) {
        return x;
      }
      x++;
   } 
}
void solve(){ 
     int n,m;cin>>n>>m;
     vector<vector<int>>arr(n,vector<int>(m));
     loop(i,0,n)loop(j,0,m) cin>>arr[i][j];
     int op[n][m] = {};
     for (int i = 0; i <n; i++)
     {
        for (int j = 0; j < m; j++)
        {
            if(!isprime(arr[i][j])){
                op[i][j] = getprime(arr[i][j]) - arr[i][j];  
            } else {
                op[i][j] = 0;
            }
        }
     }
     int ans = INT_MAX;
     loop(i,0,n){
        int sum = 0;
        loop(j,0,m){
            sum+=op[i][j];
        }
        ans = min(ans,sum);
     }
     loop(i,0,m){
        int sum = 0;
        loop(j,0,n){
            // cout<<arr[j][i]<<" ";
            sum+=op[j][i];
        }
        // cout<<endl;
        ans = min(ans,sum);
     }
     cout<<ans<<endl;
     
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}