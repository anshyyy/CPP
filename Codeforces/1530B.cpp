#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
using namespace std;
void solve(){ 
     int n,m;cin>>n>>m;
    vector<vector<int>> plates(n,vector<int> (m, 0));
     for (int i = 0; i <n; i+=2)
     {
        for (int j = 0; j <m; j+=2)
        {
            if(i%2==0){
                plates[i][j]=1;
            }
            
        }
        
     }
    for (int i = 0; i <n; i++)
    {
      for (int j = 0; i < m; j++)
      {
          cout<<plates[i][j];
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