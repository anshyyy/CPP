#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,k;
     cin>>n>>k;
     int arr[n];
     loop(i,n) cin>>arr[i];
     int i=0;
     while(k--){
        arr[n-1]+=arr[i];
        arr[i]-=arr[i];
      //  cout<<i<<" "<<endl;;
        i++;
     }
     cout<<arr[n-1]-arr[0]<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}