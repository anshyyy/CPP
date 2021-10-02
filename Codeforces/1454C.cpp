#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,mini=INT_MAX;
     cin>>n;
     vector<int>arr(n);
     unordered_map<int,int>mp;
     loop(i,n) {
         cin>>arr[i];
     }
     mp[arr[n-1]]++;
     if(all_of(arr.begin(),arr.end(),[&](int i){return i==arr[0];})){
         cout<<"0\n";
         return ;
     }
     int res,ans;

     for (int i =0;i<n-1;i++)
     {
         if(arr[i]==arr[i+1])
            continue;

         mp[arr[i]]++;
     }
     mp[arr[0]]--;
     mp[arr[n-1]]--;
     for(auto x:mp){
          mini = min(x.second,mini);
     }
     cout<<mini+1<<endl;
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}