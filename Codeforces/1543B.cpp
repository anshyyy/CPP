#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     ll sum=0;
     cin>>n;
     int arr[n];
     loop(i,n){ 
         cin>>arr[i];
         sum+=arr[i];
     }
     ll r=sum%n;
     cout<<r*(n-r)<<endl;

}
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}