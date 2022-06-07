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
void solve(){ 
     ll n;cin>>n;
     vector<ll>a(n),b(n);
     loop(i,0,n)cin>>a[i];
     loop(i,0,n)cin>>b[i];
     ll maxdiff =0,mindiff=INT_MAX;
     ll ma=0,mb=0;
     ll mia=0,mib=0;
     for (int i = 0; i <n; i++)
     {
         ll xx = a[i]-b[i];
         if(xx<0){
             cout<<"NO\n";
             return;
         }
         if(maxdiff<xx){
             maxdiff = xx;
         }
     }
     for (int i = 0; i < n; i++)
     {
        ll xy = a[i]-maxdiff ;
        if(b[i]!=0 && xy<b[i]){
           cout<<"NO\n";
           return;
        } 
     }
     cout<<"YES\n";
     
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