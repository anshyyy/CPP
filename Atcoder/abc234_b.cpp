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
     vector<pair<int,int>>arr(n);
     loop(i,0,n){
         cin>>arr[i].first>>arr[i].second;
     }
     double ans = 0 ;
     for(int i = 0;i<n;i++){
       for (int j = i; j < n; j++)
       {
           int a = arr[i].first-arr[j].first;
           int b = arr[i].second-arr[j].second;
           ans = max(ans,sqrt(a*a+b*b));
       }
     }
     cout<<fixed<<setprecision(10)<<ans<<endl;

}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}