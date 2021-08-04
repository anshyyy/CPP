#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<pair<int,int>>arr(n);
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i].first>>arr[i].second;
     }
     sort(arr.begin(),arr.end());
     pair<int,int>curr=make_pair(0,0);
     string ans;
     bool flag=true;
     for (int i = 0; i <n; i++)
     {
         int r=arr[i].first-curr.first;
         int u=arr[i].second-curr.second;
         if(r<0||u<0){
             cout<<"NO\n";
             flag=false;
             break;
         }
         ans+=string(r,'R');
         ans+=string(u,'U');
        curr=arr[i];
     }
     if(flag){
         cout<<"YES\n"<<ans<<endl;
     }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}