#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<string>arr;
     loop(i,0,n){
         string x;
         cin>>x;
         arr.push_back(x);
     }
    //  loop(i,0,n){
    //      cout<<arr[i]<<" ";
    //  }
     unordered_map<string,int>m;
     for (int i = 0; i < n; i++)
     {
         m[arr[i]]++;
     }
     string res;
     int maxi = INT_MIN;
     for(auto x : m){
        if(x.second>maxi){
            maxi = x.second;
            res = x.first;
        }
     }
     cout<<res<<endl;
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}