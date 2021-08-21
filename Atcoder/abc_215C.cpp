#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int r;
     string s;
     cin>>s>>r;
     int n=s.size();
     sort(s.begin(),s.end());
   //  cout<<s<<endl;
     while(r>1){
         next_permutation(s.begin(),s.end());
       //  cout<<s<<endl;
         r--;
     }
     cout<<s<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}