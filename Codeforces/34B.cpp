#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,m;
     cin>>n>>m;
     int arr[n];
     loop(i,n)cin>>arr[i];
     vector<int>neg(1000,0);
     for (int i = 0; i <n; i++)
     {
         if(arr[i]<0){
             neg.push_back(arr[i]);
         }
     }
     sort(neg.begin(),neg.end());
     int ans=0;
    loop(i,m){
         ans+=abs(neg[i]);
    }
     cout<<ans<<endl;
}
int main() {
int t=1;
while(t--){
 solve(); 
}
     return 0;
}