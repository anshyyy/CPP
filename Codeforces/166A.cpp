#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,k,count=0;
     cin>>n>>k;
     vector<pair<int,int>>arr;
     loop(i,n){
         int l ,r;
         cin>>l>>r;
         arr.push_back(make_pair(l,r));
     }
      std::sort( arr.begin(), arr.end(),
               []( const std::pair<int, int> &p1, const std::pair<int, int> &p2 )
               {
                   return ( p1.first > p2.first || 
                          ( !( p2.first > p1.first ) && p1.second < p2.second ) );
               } );
     for (int i = 0; i < n; i++)
     {
         int l=arr[k-1].first;
         int r=arr[k-1].second;
        // cout<<l<<" "<<r<<endl;
         if(l==arr[i].first&&r==arr[i].second){
             count++;
         }
     }
     cout<<count<<endl;
//    loop(i,n){
//        cout<<arr[i].first<<" "<<arr[i].second<<endl;
//    }

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}