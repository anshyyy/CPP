#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
  int n,cnt=0;
  cin>>n;
  while(n--){
      int x,y;
      cin>>x>>y;
      if(x!=y&&y-x>1)cnt++;
  } 
  cout<<cnt<<endl;;  
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}