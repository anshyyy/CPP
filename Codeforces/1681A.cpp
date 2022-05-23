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
     int n;cin>>n;
     vector<int>a(n);
     loop(i,0,n)cin>>a[i];
     int m;cin>>m;
     vector<int>b(m);
     loop(i,0,m)cin>>b[i];
     int alice = *max_element(all(a));
     int bob = *max_element(all(b));
    // cout<<alice<<" "<<bob<<endl;;
     if(alice>bob){
         cout<<"Alice\nAlice\n";
         return;
     }
     if(bob>alice){
         cout<<"Bob\nBob\n";
         return;
     }
     if(alice==bob){
          cout<<"Alice\nBob\n";
         return;
     }

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