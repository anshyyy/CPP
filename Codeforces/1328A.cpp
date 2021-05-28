#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
void solve(){ 
     ll a,b;
     cin>>a>>b;
     int count=0;
    //  for (int i = 0; i <=b; i++)
    //  {
         if (a%b!=0)
         {
            cout<<b-a%b;
         }
         else cout<<"0"<<endl;
         
   //  }
   //  cout<<count<<endl;
     
}
int main() {
    IOS;
int t;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}