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
     string s;cin>>s;
     vector<int>z;
     vector<int>o;
     loop(i,0,n){
        int x;cin>>x;
        if(s[i]=='1')o.push_back(x);
        else z.push_back(x);
     }
     if(z.empty()||o.empty()){
        cout<<n<<endl;
        return;
     }
     sort(all(z));
     sort(all(o));
    int x = z.back();
    int y = (upper_bound(all(o),x) - o.begin());
  //  cout<<y<<endl;
     int yy = o.size()-y;
     int ans = yy + z.size();
     cout<<ans<<endl;

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