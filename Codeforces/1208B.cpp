#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     int ans = n-1;
     map<int,int>freq;
     for (int i = 0; i < n; i++)
     {
         bool vp = true;
         for (int j = 0; j < i; j++)
         {
             freq[arr[j]]++;
             if(freq[arr[j]]==2){
                 vp=false;
                 break;
             }
         }
         int min_suff = n;
         for (int j = n-1; j>=i; j--)
         {
             freq[arr[j]]++;
             if(freq[arr[j]]==1){
                 min_suff=j;
             }
             else break;
         }
         if(vp){
             ans=min(ans,min_suff-i);
         }
         
         freq.clear();
         
     }
     cout<<ans<<endl;
     


}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}