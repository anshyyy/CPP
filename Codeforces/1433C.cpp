#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,ans;
     cin>>n;
     vector<int>arr(n);
     loop(i,n)cin>>arr[i];
     int maxi = *max_element(arr.begin(),arr.end());
     if(all_of(arr.begin(),arr.end(),[&](int i){
         return i == arr[0];
     })){
         cout<<"-1\n";
         return;
     }
     if(arr[n-1]==maxi){
         if(arr[n-1]>arr[n-2]){
             cout<<n<<endl;
             return;
         }
     }
     else if(arr[0]==maxi){
          if(arr[0]>arr[1]){
              cout<<1<<endl;
                return;
     }
     }
     for (int i = 1; i <n-1; i++)
     {
         if(arr[i]==maxi){
             if(arr[i]>arr[i+1]||arr[i]>arr[i-1]){
                 ans=i+1;
                 break;
             }
         }
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