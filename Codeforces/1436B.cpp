#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<vector<int>>arr(n,vector<int>(n,0));

     for (int i = 0; i < n; i++)
     {
         arr[i][i]=1;
         arr[i][n-i-1]=1;
     }

     if(n%2)
     {
         arr[n/2-1][n/2]=1;
         arr[n/2][n/2+1]=1;
     }
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j <n; j++)
         {
            cout<<arr[i][j];
            if(j<n-1)cout<<" ";
            else cout<<endl;
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