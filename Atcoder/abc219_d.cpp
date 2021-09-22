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
     int x,y;
     cin>>x>>y;
     int xsum=0,ysum=0,count=1;
     for (int i = 0; i <n; i++)
     {
         cin>>arr[i].first>>arr[i].second;
         xsum+=arr[i].first;
         ysum+=arr[i].second;
     }
      if(xsum<x||ysum<y){
             cout<<"-1\n";
             return;
         }
    sort( arr.begin(), arr.end(),
               []( const std::pair<int, int> &p1, const std::pair<int, int> &p2 )
               {
                   return ( p1.second > p2.second || 
                          ( !( p2.second > p1.second ) && p1.first < p2.first ) );
               } );
     int a=0,b=0;
     for (int i = 0; i <n; i++)
     {
         
         a+=arr[i].first;
         b+=arr[i].second;
        // cout<<a<<" "<<b<<endl;
         if(a>=x&&b>=y){
             cout<<count<<endl;
             return;
         }
         count++;
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