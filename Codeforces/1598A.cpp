#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     string s,r;
     cin>>s>>r;
     if(r[n-1]==1||s[0]==1){
         cout<<"NO\n";
         return;
     }
     for (int i = 0; i < n; i++)
     {
        if(s[i]=='1'&&r[i]=='1'&&s[i]==r[i]){
            cout<<"NO\n";
            return;
        }
     }
     cout<<"YES\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}