#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     string s;
     cin>>n>>s;
     int ans=0;
     int bal=0;
     for (int i = 0; i <n; i++)
     {
         if(s[i]=='('){
             bal++;
         }
         else{
             bal--;
             if(bal<0){
                 bal=0;
                 ans++;
             }
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