#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int> arr(n);
     loop(i,n)cin>>arr[i];
     sort(arr.begin(),arr.end(),greater<int>());
     ll sum=0;
     for (int i = 0; i <n; i++)
     {
         sum += arr[i]*arr[i]*(1-i%2*2);
     }
     double pi = 3.1415926536;
     cout<<fixed<<setprecision(10)<<pi*sum<<endl;
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}