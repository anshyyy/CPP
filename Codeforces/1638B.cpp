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
     vector<ll>a(n);
     loop(i,0,n)cin>>a[i];
    while (1) {
      int c = 0;
      for (int i = 0; i < n - 1; i++) {
         if (a[i] > a[i + 1] && (a[i] + a[i + 1]) % 2 == 1) {swap(a[i], a[i + 1]); c++;}
      }
      if (c == 0)break;
   }
    //  loop(i,0,n)cout<<arr[i]<<" ";
    //  cout<<endl;
     if(is_sorted(all(a)))cout<<"Yes\n";
     else cout<<"No\n";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}