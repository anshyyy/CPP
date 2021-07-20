#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;cin>>n;
     string s;
     cin>>s;
     unordered_set<char> mp;
     for(int i=0;i<n;i++){
         mp.insert(tolower(s[i]));
     }
    (mp.size()>=26)?cout<<"YES\n":cout<<"NO\n";
    // if(mp.size()>=26)cout<<"YES\n";
    // else cout<<"NO\n";
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}