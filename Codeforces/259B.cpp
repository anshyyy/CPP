#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
   vector<vector<int>> arr(4,vector<int>(4,0));
     for (int i = 1; i <4; i++)
     {
         for (int j = 1; j < 4; j++)
         {
             cin>>arr[i][j];
         }
     }
     arr[1][1]=(arr[2][1]+arr[2][3]+arr[3][1]+arr[3][2]-arr[1][2]-arr[1][3])/2;
     arr[2][2]=(arr[1][2]+arr[1][3]+arr[3][1]+arr[3][2]-arr[2][1]-arr[2][3])/2;
     arr[3][3]=(arr[1][2]+arr[1][3]+arr[2][1]+arr[2][3]-arr[3][1]-arr[3][2])/2;
     for (int i = 1; i <4; i++)
     {
         for (int j = 1; j <4; j++)
         {
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
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