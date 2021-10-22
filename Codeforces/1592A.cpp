#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,h,count=0;
     cin>>n>>h;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     sort(arr.begin(),arr.end(),greater<int>());
     ll a=arr[0];
     ll b = arr[1];
     if(h<=a){
         cout<<"1\n";
         return;
     }
     count = a+b;
     ll ans = 2*(h/count);
      h=h%count;
      if(h==0){
          ans+=0;
      }
      else if(h<=a){
        ans+=1;
      }
      else ans+=2;
     cout<<ans<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}