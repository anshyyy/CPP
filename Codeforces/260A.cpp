#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int a,b,n,x=0,count=0;
     cin>>a>>b>>n;
     bool f1=true;
     string s=to_string(a);
     for (int i = 0; i <=9; i++)
     {
         s=s+to_string(i);
          x=stoi(s);
         if(x%b==0){
             f1=false;
             break;
         }
         else{
             s.pop_back();
             x=stoi(s);
         }
     }
    if(f1==true){
        cout<<"-1\n";
        return;
    }
    cout<<x;
    loop(i,n-1)cout<<0;
    
     
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}