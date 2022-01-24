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
ll ceil_div(ll a,ll b){
     return a%b==0?a/b:a/b+1;
}
void solve(){ 
      ll n,k;
      cin >>n>>k;
      vector<ll>arr(n+1);
      ll sum =0;
      for (int i = 1; i <=n; i++)
      {
          cin>>arr[i];
          sum+=arr[i];    
      }
      if(sum<=k){
           cout<<"0\n";
           return;
      }
      if(sum+1==k){
           cout<<"1\n";
           return;
      }
      sort(all1(arr));
      ll diff=sum-k;
      ll ans = diff;
      sum = 0;
      for(int i = n;i>1;i--){
           sum+=arr[i];
           ll x;
           if(sum -(n-i+1)*arr[1]>=diff)x =0;
           else{
                x = max(ceil_div(diff-sum+(n-i+1)*arr[1],n-i+2),0LL);
           }
           ans = min(ans,x+n-i+1);
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