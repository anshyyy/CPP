#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,x,count=0;
     cin>>n>>x;
     vector<int>arr(n);
     loop(i,n){
         cin>>arr[i];
         if(arr[i]>=x){
             count++;
         }
     }
     cout<<n-count<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}