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
     vector<int>a(n),b(n);
     loop(i,0,n)cin>>a[i];
     loop(i,0,n)cin>>b[i];
     int sum1 = accumulate(a.begin(),a.end(),0);
     int sum2 = accumulate(b.begin(),b.end(),0);
     if(sum1>sum2){
         cout<<"0\n";
         return;
     }
     double x = sum2-sum1;
     cout<<x/100<<endl;
     x = ceil(x/100);
     cout<<x<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}