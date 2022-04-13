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
     ll n;cin>>n;
     vector<ll>arr(n);
     ll posi = 0,negi = 0;
     loop(i,0,n){
         cin>>arr[i];
         if(arr[i]>0)posi++;
         else if (arr[i]<0) negi++;
     }
     if(n==posi||n==negi){
         cout<<(n*(n-1))/2<<endl;
         return;
     }
     ll ans = (negi*(negi-1))/2 + (posi*(posi-1))/2;
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