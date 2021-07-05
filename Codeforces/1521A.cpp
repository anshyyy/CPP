#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int a,b;
     cin>>a>>b;
     if(b==1) cout<<"NO\n";
     else {
         cout<<"YES\n";
         cout<<a<<' '<<a*(ll)b<<' '<<a*(ll)(b+1)<<endl;
     }

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}