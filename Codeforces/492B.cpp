#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,k;
     cin>>n>>k;
     vector<int> arr(n);
     loop(i,n)cin>>arr[i];
     sort(arr.begin(),arr.end());
     int r=max(arr[0],k-arr[n-1])*2;
     for (int i = 0; i <n-1; i++)
     {
         r=max(r,arr[i+1]-arr[i]);
     }
     cout.precision(8);
     cout<<fixed<<double(r)/2.0<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}