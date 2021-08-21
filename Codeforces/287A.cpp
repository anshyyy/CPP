#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     char arr[4][4];
     for (int i = 0; i <4; i++)
     {
         cin>>arr[i];
     }
     
     for (int i = 0; i < 4; i++)
     {
         for (int j = 0; j < 4; j++)
         {
             int c=(arr[i][j]=='#'?1:0)+(arr[i+1][j]=='#'?1:0) +(arr[i][j+1]=='#'?1:0)+(arr[i+1][j+1]=='#'?1:0);
            if(c>2){
                cout<<"YES\n";
                return;
            }
         }
         
     }
     cout<<"NO\n";
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}