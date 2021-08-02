#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,k;
     cin>>n>>k;
     ll arr[n];
     loop(i,n) cin>>arr[i];
     sort(arr,arr+n);
     int i=n-2;
     while(k--){
        arr[n-1]+=arr[i];
       // arr[i]-=arr[i];
      //  cout<<i<<" "<<endl;;
        i--;
     }
     cout<<*max_element(arr,arr+n)<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}