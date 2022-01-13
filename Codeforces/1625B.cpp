#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n ;
     cin>>n;
     vector<int>arr(n);
     unordered_map<int,vector<int>>mp;
     loop(i,0,n){
         cin>>arr[i];
         mp[arr[i]].push_back(i+1);
         }
    int ans = -1;
    for(auto x : mp){
        for(int i = 0;i<x.second.size()-1;i++){
            ans = max(ans,x.second[i]+n-x.second[i+1]);
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