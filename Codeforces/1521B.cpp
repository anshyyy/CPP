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
    int pos = -1;
    int mini = INT_MAX;
    for(int i = 0;i<n;i++){
        int x;cin>>x;
        if(x<mini){
            mini = x;
            pos = i;
        }
    }
    cout<<n-1<<endl;
    for(int i = 0;i<n;i++){
        if(pos==i)continue;
        cout<<pos+1<<" "<<i+1<<" "<<mini<<" "<<mini+abs(i-pos)<<endl;
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