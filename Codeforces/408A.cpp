#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
   int n,mini=INT_MAX;
   cin>>n;
   int arr[n];
   loop(i,n)cin>>arr[i];
  for (int i = 0; i <n; i++)
  {
      int sum=0;
      for (int j = 0; j <arr[i]; j++)
      {
          int m; 
          cin>>m;
         sum+=m*5;
      }
      sum+=arr[i]*15;
      mini=min(sum,mini);
  }
  
   cout<<mini<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}