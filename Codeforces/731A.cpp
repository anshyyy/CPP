#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int move=0;
     move=min(abs('a'-s[0]),26-abs('a'-s[0]));
   //  cout<<move;
    for(int i=1;i<s.size();i++){
         move+=min(abs(s[i-1]-s[i]),26-abs(s[i-1]-s[i]));
     }
     cout<<move<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}