#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int z=count(s.begin(),s.end(),'0');
     if(z==0){
         cout<<"0";
         return;
     }
     int a=s.find('0');
     
     int b=s.rfind('0');
    
     if(b-a+1==z) cout<<"1\n";
     else cout<<"2\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}