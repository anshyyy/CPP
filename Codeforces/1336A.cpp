#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll a,b,count=0;
     cin>>a>>b;
    //  while(a>0&&b>0){
    //      if(a==b){
    //          if(a==1&&b==1){
    //              break;
    //          }
    //        else{  a=a-2;
    //          b--;
    //          count++;
    //        }
    //      }
    //      else if(a>b){
    //          a=a-2;
    //          b--;
    //          count++;
    //      }
    //      else if(b>a){
    //          b=b-2;
    //          a--;
    //          count++;
    //      }
    //  }
    //  cout<<count<<endl;
    cout<<min({a,b,(a+b)/3})<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}