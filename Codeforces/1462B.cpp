#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     string s;
     cin>>s;
     for (int i = 0; i <=4; i++)
     {
         string a = s.substr(0,i);
         string b = s.substr(n-4+i);
         string ans= a+b;
        // cout<<a<<" "<<b<<" "<<ans<<endl;
         if (ans=="2020"){
             cout<<"YES\n";
             return;
         }
     }
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