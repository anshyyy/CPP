#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,count=0;
     cin>>n;
     vector<int>arr(n+1);
     loop(i,1,n+1)cin>>arr[i];
     ll sum = accumulate(arr.begin(),arr.end(),0LL);
     ll re = 2*sum/n;
     map<ll,ll>cnt;
     if((sum-re)*n!=sum*(n-2)){
         cout<<"0\n";
         return;
     }
     for (int i = 1; i < n+1; i++)
     {
         count+=cnt[re-arr[i]];
         cnt[arr[i]]++;
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