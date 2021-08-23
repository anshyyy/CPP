#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<n+1;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,mini=INT_MAX,maxi=INT_MIN;
     cin>>n;
     ll arr[n+1],brr[n+1]={};
     for1(i,n){
         cin>>arr[i];
         brr[i]=arr[i];
         }
      reverse(brr+1, brr + n+1);
      vector<ll>vec;
     if(is_sorted(arr+1,arr+n+1)){
         cout<<"yes\n";
         cout<<"1 1\n";
         return;
     }
      if(is_sorted(brr+1,brr+n+1)){
         cout<<"yes\n";
         cout<<"1 "<<n<<endl;
         return;
     }
    for (int i = 1; i <n; i++)
    {
        if(arr[i]>arr[i+1]){
            mini=min(mini,i);
            maxi=max(maxi,i);
            vec.push_back(arr[i]);
        }
    }
    vec.push_back(arr[maxi+1]);
   // loop(i,vec.size())cout<<vec[i]<<" ";
   // cout<<endl;
      sort(vec.begin(),vec.end());
    for(int i=maxi+2;i<n+1;i++) vec.push_back(arr[i]);
     //loop(i,vec.size())cout<<vec[i]<<" ";
     if(is_sorted(vec.begin(),vec.end())){
         cout<<"yes\n";
         cout<<mini<<" "<<maxi+1<<endl;
     }
     else cout<<"no"<<endl;

   

}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}