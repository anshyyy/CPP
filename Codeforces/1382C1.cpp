#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     string a,b;
     cin>>n>>a>>b;
     vector<int>res;
     for (int i = 0; i <n; i++)
     {
         if(a[i]!=b[i]){
             if(i>0) res.push_back(i+1);
             res.push_back(1);
             if(i>0) res.push_back(i+1);
         }
     }
     cout<<res.size()<<endl;
     loop(i,res.size())cout<<res[i]<<" ";
     cout<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}