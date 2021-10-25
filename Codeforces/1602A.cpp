#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     char a=s[0];
     int i ;
     for (i = 0; i < s.size(); i++)
     {
        a=min(s[i],a);
     }
     string ss="";
     bool flag = false;
     for (int i = 0; i <s.size(); i++)
     {
         if(s[i]==a&&flag==false){
             flag = true;
         }
         else{
             ss+=s[i];
         }
     }
     cout<<a<<" "<<ss<<endl;
    
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}