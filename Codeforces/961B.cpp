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
     ll n,k;
     cin>>n>>k;
     vector<ll>arr(n+1),t(n+1);
     loop(i,1,n+1)cin>>arr[i];
     vector<ll>ps(n+1);
     ll sum = 0;
     loop(i,1,n+1){
         cin>>t[i];
         if(t[i]){
            sum += arr[i];
            arr[i]=0;
         }
         ps[i] = ps[i-1]+arr[i];
     }
     ll maxi = LONG_MIN;
    //  loop(i,0,n+1)cout<<ps[i]<<" ";
    //  cout<<endl;
     for (int i = 0; i <=n-k+1; i++)
     {
         maxi = max(maxi,ps[i+k-1]-ps[i-1]);
         //cout<<maxi<<endl;
     }
     cout<<maxi+sum<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}