#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll a,b,count=0;
     cin>>a>>b;
     if(a==b){
          cout<<"0\n";
          return;
     }
     ll res = abs(a-b);
     ll ans=0;
     vector<ll>arr = {10,9,8,7,6,5,4,3,2,1};
     for (int i = 0; i < 10; i++)
     {
          if(res!=ans){
         ans+=res/arr[i];
         res= res%arr[i]; 
         
          }
     }
     cout<<(abs(a-b)+9)/10<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}