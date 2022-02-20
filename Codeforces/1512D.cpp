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
     vector<ll>arr(n+2);
     loop(i,0,n+2)cin>>arr[i];
     sort(all(arr));
     ll sum = accumulate(all(arr),0LL);
     if(sum-arr[n]-arr[n+1]==arr[n]){
         for(int i=0;i<n;i++){
             cout<<arr[i]<<" ";
         }
     }
     else{
         sum -= arr[n+1];
         ll x = -1;
         for(int i=0;i<=n;i++){
             if(sum-arr[i]==arr[n+1]){
                 x=i;
                 break;
             }
         }
         if(x==-1){
             cout<<x;
         }
         else{
             for(int i =0;i<=n;i++){
                 if(i!=x) cout<<arr[i]<<" ";
             }
         }
     }
     cout<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}