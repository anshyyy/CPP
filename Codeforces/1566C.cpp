#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
int result(string s){
    int ans= count(s.begin(),s.end(),'0');
    int n=s.size();
    bool a =false,b=false;
    for (int i = 0; i <n; i++)
    {
        if(s[i]=='0') a=true;
        if(s[i]=='1') b=true;
        if(a&&b){
            ans++;
            a=b=false;
        }
    }
    return ans;
}
void solve(){ 
     string a,b;
     int n,ans=0;
     cin>>n>>a>>b;
     string res="";
     for (int i = 0; i <n; i++)
     {
         if(a[i]!=b[i]){
            ans+=2+result(res);
            res="";
         } else{
             res+=a[i];
         }
     }
     cout<<ans+result(res)<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}