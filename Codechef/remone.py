#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
    ll n;
    cin>>n;
    vector<int>arr(n),brr(n-1);
    loop(i,n)cin>>arr[i];
    loop(i,n-1)cin>>brr[i];
    vector<ll> freq(10000,0);
    unordered_map<ll,ll> map;
    for(int i=0;i<n;i++){
        for (int j = 0; j <n-1; j++)
        {
             map[brr[i]-arr[j]]++;
        } 
    }
    ll ans=INT_MIN;
    for(auto x : map){
        if(x.second>ans){
            ans=x.first;
        }
    }
     for (auto x : map)
      cout << x.first << " " << x.second << endl;
    
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