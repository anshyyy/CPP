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
     vector<int>arr(n);
     vector<pair<char,int>>a;
     string s;
     loop(i,0,n)cin>>arr[i];
     cin>>s;
     loop(i,0,n){
         a.push_back({s[i],arr[i]});
     }
     sort(a.begin(),a.end()); 
    bool is = true;
    for (int i = 0; i < n; i++)
    {
        char c = a[i].second;
        int x = a[i].first;
        if(a[i].first=='B'&&a[i].second<i+1){
            is = false;
        }
        if(a[i].first=='R'&&a[i].second>i+1){
            is = false;
        }
    }
    cout<< (is? "YES\n":"NO\n");
    //   loop(i,0,n){
    //      cout<<a[i].first<<" "<<a[i].second<<" ";
    //      cout<<endl;
    //  }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}