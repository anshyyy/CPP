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
     ofstream myfile;
     myfile.open ("example.txt");
     ll n;cin>>n;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
             ll x = i*j;
             ll sq = sqrtl(x);
             if(sq*sq==x){
                 myfile<<i<<" "<<j<<endl;
             }
         }
     }
     myfile.close();

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