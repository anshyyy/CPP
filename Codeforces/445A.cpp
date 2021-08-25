#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
    int n,m;
     cin>>n>>m;
     char s[n][m];
     loop(i,n){loop(j,m)cin>>s[i][j];}
     for (int i = 0; i <n; i++)
     {
         for (int j = 0; j < m; j++)
             if(s[i][j]=='.'){
                 if((i+j)&1) s[i][j]='W';
                 else s[i][j]='B';
             }    
     }
     loop(i,n){loop(j,m){cout<<s[i][j];}cout<<endl;}
     
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}