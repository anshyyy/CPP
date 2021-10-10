#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,h,sum=0;;
     cin>>n>>h;
     vector<ll>arr(n);
     loop(i,n)cin>>arr[i];
     sum=accumulate(arr.begin(),arr.end(),0);
     if(sum<=h){
         cout<<n<<endl;
         return;
     }
     ll res=0,ab;
     sort(arr.begin(),arr.end(),greater<ll>());
     for (ll i = 0; i < n; i++)
     {
        h-=arr[i];
       // cout<<h<<" ";
        if(h<=0){
            ab=i+1;
            break;
        }
     }
     cout<<ab<<endl;
    // ll maxi=*max_element(arr.begin(),arr.end()),answ=0;
    // if(maxi>=h){
    //     cout<<1<<endl;
    //     return;
    // }
    // sort(arr.begin(),arr.end(),greater<ll>());
    // for (ll i = 1; i <n; i++)
    // {
    //     maxi+=arr[i];
    //     if(maxi>=h){
    //         answ=i+1;
    //         break;
    //     }
    // }
    // cout<<answ<<endl;
    
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}