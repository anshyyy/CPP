#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     bool x=true;
     for (int i = 0; i <s.size(); i++)
     {
          if (s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
          {
             i+=2;
             if(!x) cout<<" ";
            continue;
          }
          else {
              x=false;
          cout<<s[i];
          }
      
          
     }
     // cout<<s<<endl;


}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}