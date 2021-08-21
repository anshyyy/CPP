#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,res=0;
     cin>>n;
     vector<int> arr(n);
     loop(i,n)cin>>arr[i];
     sort(arr.begin(),arr.end());
     for(int i=0;i<n;i++){
         res+=abs(i+1-arr[i]);
     }
     cout<<res<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}