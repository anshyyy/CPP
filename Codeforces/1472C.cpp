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
     vector<ll>arr(n);
     ll maxi = LONG_MIN;
     loop(i,0,n)cin>>arr[i];
     for (int i = n-1; i >=0; i--) // bcz we have to jump from left ot right to reach its end.
     {
         if(i+1+arr[i]<=n){
             arr[i] += arr[i+arr[i]];
         }
         maxi = max(maxi,arr[i]);
     }
    //  loop(i,0,n)cout<<arr[i]<<" ";
    //  cout<<endl;
     cout<<maxi<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}