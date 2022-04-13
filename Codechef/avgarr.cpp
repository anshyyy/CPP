#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,x;
     cin>>n>>x;
     vector<ll>ans(n);
     if(n%2){
         ll m = n/2;
         ans[m]=x;
         for (int i = 1; i <(n/2)+1; i++)
         {
             ans[m+i]=x+i;
             ans[m-i]=x-i;
         }
     }
     else{
         ll m = n/2;
         ans[m]=x+1;
         ans[m-1]=x-1;
         for(int i = m-2;i>=0;i--){
             ans[i]=ans[i+1]-1;
         }
         loop(i,m+1,n) ans[i]=ans[i-1]+1;
     }
     loop(i,0,n)cout<<ans[i]<<" ";
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