#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int arr[n],sum=0;
     loop(i,n){
         cin>>arr[i];
         sum+=arr[i];
     }
     if(sum%n==0){
         cout<<n<<endl;
     }
     else{
         cout<<n-1<<endl;
     }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}