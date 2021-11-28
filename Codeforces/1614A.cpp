#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,l,r,k,count=0;
     cin>>n>>l>>r>>k;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     sort(arr.begin(),arr.end());
     for (int i = 0; i <n; i++)
     {
         if(arr[i]>=l&&arr[i]<=r){
             if(k>=arr[i]){
                 count++;
                 k-=arr[i];
             }
             
         }
     }
     cout<<count<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}