#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     string s,l,r;
     cin>>n>>s;
     l=s.substr(0,n);
     r=s.substr(n,n);
     sort(l.begin(),l.end());
     sort(r.begin(),r.end());
     bool flag1=true,flag2=true;
     for (int i = 0; i <n; i++)
     {
         if(l[i]>=r[i]){
             flag1=false;
             break;
         }
     }
     for (int i = 0; i <n; i++)
     {
         if(l[i]<=r[i]){
             flag2=false;
             break;
         }
     }
     cout<<((flag1||flag2)?"YES":"NO")<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}