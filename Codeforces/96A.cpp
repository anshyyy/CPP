#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int n=s.size();
     int count=1;
     bool flag=false;
     if(n<7){
          cout<<"NO"<<endl;
          return;
     }
     for (int i = 0; i<n; i++)
     {
          if(s[i]==s[i+1]){
               count++;
               if(count>=7){
                    flag=true;
                    break;
               }
                 
          }
          else count=1;
     }
     if(flag)cout<<"YES\n";
     else cout<<"NO\n";
     
     
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}