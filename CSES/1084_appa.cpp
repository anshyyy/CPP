#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,m,k,count=0;
     cin>>n>>m>>k;
     vector<int> vec(n),app(m);
     loop(i,n)cin>>vec[i];
     loop(i,m)cin>>app[i];
     sort(vec.begin(),vec.end());
     sort(app.begin(),app.end());
     int i=0,j=0;
     while (i<n&&j<m)
     {
         if(abs(vec[i]-app[j])<=k){
             i++;j++;
             count++;
         }
         else{
             if(vec[i]-app[j]>k) j++;
             else i++;
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