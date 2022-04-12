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
     int n;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     cout<<n*3<<endl;
     for (int i = 1; i <=n; i+=2)
     {
         for (int j = 1; j <=3; j++)
         {
             cout<<2<<" "<<i<<" "<<i+1<<endl;
             cout<<1<<" "<<i<<" "<<i+1<<endl;
         }
         
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