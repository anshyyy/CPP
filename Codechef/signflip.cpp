#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,k;
     cin>>n>>k;
     vector<ll> arr(n);
     for (int i = 0; i < n; i++)
     {
        cin>>arr[i];
     }
     sort(arr.begin(),arr.end());
     ll minsum=0;
    for (int i = 0; i < k; i++)
    {
         if(arr[i]>=0)break;
       minsum+= (-1)*arr[i];
      // cout<<minsum<<endl;
    }
    ll mxsum=0;
    for (int i = n-1; i >=0; i--)
    {
       if(arr[i]<=0)break;
         mxsum+=arr[i];
       //  cout<<mxsum<<endl;
    }
    
    cout<<mxsum+minsum<<endl;
    
     
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}