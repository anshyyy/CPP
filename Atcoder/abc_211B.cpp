#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s1,s2,s3,s4;
     cin>>s1>>s2>>s3>>s4;
     bool a1=false,a2=false,a3=false,a4=false;
     for(auto i:s1){
        if(i=='H'||i=='2B'||i=='3B'||i=='HR'){
            a1=true;
        }
     }
      for(auto i:s2){
        if(i=='H'||i=='2B'||i=='3B'||i=='HR'){
            a2=true;
        }
     }
      for(auto i:s3){
        if(i=='H'||i=='2B'||i=='3B'||i=='HR'){
            a3=true;
        }
     }
      for(auto i:s4){
        if(i=='H'||i=='2B'||i=='3B'||i=='HR'){
            a4=true;
        }
     }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}