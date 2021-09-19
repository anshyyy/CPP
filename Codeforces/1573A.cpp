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
     int count=1,ans=int(s[n-1]-'0'),res,countz=0;
     bool flag=true;
     if(ans==0){
         flag=false;
         count=0;
     }
     for (int i =n-2; i>=0; i--)
     {
         int x=int(s[i]-'0');
          if(x>0){
           ans+=x;
           count++;
        }
        else if(x==0){
            countz++;
        }
     }
      res=ans+count;
     if(flag==false){
         cout<<res<<endl;
     }
     else if(countz==n){
        cout<<"0\n";
     }
     else cout<<res-1<<endl;
    
    
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}