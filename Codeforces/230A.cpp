#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int s,n;
     cin>>s>>n;
   vector<pair<int,int>>arr;
    loop(i,n){
        int x,y;
        cin>>x>>y;
        arr.push_back(make_pair(x,y));
    }
    sort(arr.begin(),arr.end());
   // loop(i,n)cout<<arr[i].first<<" "<<arr[i].second<<endl;
   for (int i = 0; i <n; i++)
   {
       if(s>arr[i].first){
           s+=arr[i].second;
       }
       else{
           cout<<"NO\n";
           return;
       }
   }
   cout<<"YES\n";
   
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}