#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n,m;
     cin>>n>>m;
     vector<pair<string,int>>a;
     loop(i,0,n){
         string s;
         cin>>s;
         for(int j =1;j<s.size();j+=2)
            s[j]=155-s[j];
         a.push_back({s,i+1});
     }
     sort(a.begin(),a.end());
     for(int i = 0;i<n;i++){
        cout<<a[i].second<<" ";
     }
    


}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}