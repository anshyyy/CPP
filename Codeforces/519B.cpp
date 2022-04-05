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
     ll n;
     cin>>n;
     vector<ll>a(n),b(n-1),c(n-2);
     ll s1=0,s2=0,s3=0;
     loop(i,0,n){
         cin>>a[i];
         s1+=a[i];
     }
     loop(i,0,n-1){
         cin>>b[i];
         s2+=b[i];
     }
     loop(i,0,n-2){
         cin>>c[i];
         s3+=c[i];
     }
     cout<<s1-s2<<endl<<s2-s3;
     cout<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}