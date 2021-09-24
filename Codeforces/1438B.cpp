#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;;
     vector<int>arr(n);
     unordered_map<int,int>mp;
     loop(i,n){
         cin>>arr[i];
         mp[arr[i]]++;
     }
     unordered_set<int>s(arr.begin(),arr.end());
     for(auto &x : mp){
         if(x.second>1){
             cout<<"YES\n";
             break;
         }
     }
     if(arr.size()==s.size())
         cout<<"NO\n";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}