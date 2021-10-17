#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,k;
     cin>>n>>k;
     ll arr[k];
     loop(i,0,k)cin>>arr[i];
     sort(arr,arr+k);
     ll cat=0,count=0;
     for (int i = k-1; i >=0; i--)
     {
         ll ans = arr[i];
         if(ans<=cat)break;
         ll res = n - ans;
         cat+=res;
        count++;
     }
     cout<<count<<endl;
      
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}