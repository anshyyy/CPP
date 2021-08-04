#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
      int n,s,k,count=0;
      cin>>n>>s>>k;
      vector<int> arr(n+1),scl(n+1);
      for1(i,n)cin>>arr[i];
      for1(i,n)cin>>scl[i];
      for1(i,k)
      {
           int x;
           cin>>x;
         for1(j,n){
              if(scl[j]==scl[x]&&arr[j]>arr[x])
               {
                    count++;
                    break;
               }
         }
           
      }
      cout<<count<<endl;
      
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
      return 0;
}