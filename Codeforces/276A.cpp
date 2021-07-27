#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,k,joy=0;
     cin>>n>>k;
     int maxi=INT_MIN;
     while(n--){
      int f,t;
      cin>>f>>t;
      if(t>k){
       joy=f-(t-k);
       //cout<<joy<<endl;
      }
      else {
          joy=f;
         // cout<<joy<<endl;
          }

      maxi=max(maxi,joy);
     }
     cout<<maxi<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}