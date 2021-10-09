#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int n = s.size();
     if(n==4){
         cout<<s<<endl;
     }
     else{
         int z = 4 - n;
         while(z--)
           cout<<"0";
        cout<<s<<endl;
     }
}
int main() {
int t=1;
while(t--){
 solve(); 
}
     return 0;
}