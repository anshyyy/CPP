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
     ll n,k;
     cin>>n>>k;
     vector<ll>a(n),b(n);
     loop(i,0,n)cin>>a[i];
     loop(i,0,n)cin>>b[i];
     bool can1 = true, can2 = true;
     for (int i = 1; i <n; i++)
     {
          bool nowa = false,nowb = false;
          if((can1&&abs(a[i]-a[i-1])<=k)||(can2&&abs(a[i]-b[i-1])<=k)){
              nowa = true;
          }
          if((can1&&abs(b[i]-a[i-1])<=k)||(can2&&abs(b[i]-b[i-1])<=k)){
            nowb = true;
          }
          can1 = nowa;
          can2 = nowb;
          if(!can1&&!can2){
              cout<<"No\n";
              return;
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