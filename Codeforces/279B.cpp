#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define nndl '\n'
typedef long long ll;
using namespace std;
void solve(){ 
      int n,t;
     cin>>n>>t;
     vector<int>arr(n);
     loop(i,n)cin>>arr[i];
     if(n==1 && arr[0]>t){
         cout<<"0"<<nndl;
         return;
     }
     int j=-1,sum=0,ans=0;
     for (int i = 0; i <n; i++) // two pointers is the best
     {
         if(sum+arr[i]<=t){
             sum+=arr[i];
         }
         else{
             sum+=arr[i];
             while(sum>t){
                 j++;
                 sum-=arr[j];
             }
         }
         ans=max(ans,i-j);
     }
      cout<<ans<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}