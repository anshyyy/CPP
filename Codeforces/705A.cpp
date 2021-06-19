#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      if(i%2==0) cout<<"I hate ";
      else cout<<"I love ";
      if(i!=n-1) cout<<"that ";
      else cout<<"it ";
  }
}
int main() {
int t=1;
// cin>>t;
while(t--){
 solve(); 
}
     return 0;
}