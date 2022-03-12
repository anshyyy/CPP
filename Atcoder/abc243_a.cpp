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
     ll v,a,b,c;
     cin>>v>>a>>b>>c;
     bool f=true,m=true,t=true;
     while(true){
        v= v-a;
        if(v<0){
            f = false;
            break;
        }
        v=v-b;
        if(v<0){
            m = false;
            break;
        }
        v=v-c;
        if(v<0){
            t = false;
            break;
        }
     }
     if(!f)cout<<"F\n";
     if(!m) cout<<"M\n";
     if(!t)cout<<"T\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}