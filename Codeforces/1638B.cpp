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
     vector<ll>arr(n);
     vector<ll>even,odd;
     loop(i,0,n){
          cin>>arr[i];
          if(arr[i]%2)even.push_back(arr[i]);
          else odd.push_back(arr[i]);
     }
     vector<ll>even1 =even;
     vector<ll>odd1 =odd;
     sort(all(even1));
     sort(all(odd1));
     if((even1==even)&&(odd1==odd)){
          cout<<"YES\n";
     }
     else cout<<"NO\n";
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}