#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,x;
     cin>>n>>x;
     vector<bool> arr(200);
     for (int i = 1; i <n+x; i++)
     {
         arr[i]=false;
     }
     
     for (int i = 1; i <=n; i++)
     {
         int r;
         cin>>r;
         arr[r]=true;
     }
     for (int i = n+x; i > 0; i--)
     {
         int v=0;
          for (int j = 1; j <=i; j++)
          {
              if(!arr[j]) v++;
          }
          if(v<=x){
              cout<<i<<endl;
              return;
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