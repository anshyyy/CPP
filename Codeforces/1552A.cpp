#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     string s,res;
     cin>>s;
     res=s;
     int cnt=0;
     sort(res.begin(),res.end());
     loop(i,n){
         if(s[i]!=res[i]){
             cnt++;
         }
     }
     cout<<cnt<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}