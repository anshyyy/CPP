#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s1,s2,s3,t;
     cin>>s1>>s2>>s3>>t;
     string ans="";
     for (int i = 0; i < t.size(); i++)
     {
         int x=int(t[i]-'0');
         if(x==1){
             ans+=s1;
         }
         else if (x==2)
         {
             ans+=s2;
         }
         else{
             ans+=s3;
         }
     }
     cout<<ans<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}