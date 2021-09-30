#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr(n);
     loop(i,n) cin>>arr[i];
     if(n==1){
         cout<<arr[0]<<endl;
         return;
     }
     for (int i = 0; i < n/2; i++)
     {
        cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
     }
     if(n%2){
         cout<<arr[n/2]<<" ";
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