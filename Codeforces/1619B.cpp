#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
    set<ll>s;
    for(int i =1;i*i<=n;i++){
        s.insert(i*i);
    }
    for(int i =1;i*i*i<=n;i++){
        s.insert(i*i*i);
    }
     cout<<s.size()<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}