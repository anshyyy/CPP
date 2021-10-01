#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,x;
     cin>>n;
     vector<ll>arr(n);
     loop(i,n)cin>>arr[i];
     cin>>x;
     ll sum=accumulate(arr.begin(),arr.end(),0LL);
     ll r = ceil((double)x/(double)sum);
     sum=sum*r;
     ll ans= r*n;
     int i=0;
     while(true){
      if(sum>x){
         sum=sum-arr[n-1-i];
         ans--;
         i++;
      }
      else break;
     }
     cout<<ans+1<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}