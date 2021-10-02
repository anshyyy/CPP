#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr;
     loop(i,n)cin>>arr[i];
     vector<vector<int>>res;
     for (int i =n-1; i > 0; i--)
     {
         int maxi = LONG_MIN;
         int id = -1;
         for (int j = 0; j <n; j++)
         {
             if(maxi<arr[j]){
                 maxi= arr[j];
                 id = j;
             }
         }
         if(id ==i){
             continue;
         }
         else{
             vector<int>t;
             vector<int>tle;
             for (int j = 0; j <n; j++)
             {
                 tle[j] = arr[(j+id+1)%(i+1)];
             }
             arr = tle;
             res.push_back({1,i+1, id+1});
         }
     }
     cout<<res.size()<<endl;
     for(auto it : res){
         for(auto x : it){
             cout<<x<<" ";
         }
         cout<<endl;
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