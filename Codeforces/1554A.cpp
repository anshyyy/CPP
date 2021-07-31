#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long int ll;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     vector<ll>arr(n);
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
    //  sort(arr.begin(),arr.end());
    //  if(arr[n-1]==arr[n-2]){
    //      cout<<arr[n-1]*arr[n-3]<<endl;
    //  }
    //  else{
    //      cout<<arr[n-1]*arr[n-2]<<endl;
    //  }
    ll mini=*min_element(arr.begin(),arr.end());
    ll maxi=*max_element(arr.begin(),arr.end());
    ll maxp=0;
    for (int i = 0; i <n-1; i++)
    {
       ll mn=min(arr[i],arr[i+1]);
       ll mx=max(arr[i],arr[i+1]);
       maxp=max(maxp,mn*mx);
    }
    maxp=max(maxp,mini*maxi);
    cout<<maxp<<endl;
    

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}