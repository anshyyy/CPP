#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,q;
     cin>>n>>q;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     ll sum = accumulate(all(arr),0LL);
     sort(all(arr));
     vector<ll>suff(n,0);
     suff[n-1]=arr[n-1];
     for (int i =n-2; i >=0; i--)
     {
          suff[i]=suff[i+1]+arr[i];
     }
     reverse(all(suff));
     //loop(i,0,n)cout<<suff[i]<<" ";
     //cout<<endl;
     while(q--){
        ll qry;cin>>qry;
         if(qry>sum){
             cout<<"-1\n";
             continue;
         }
         ll ans = lower_bound(all(suff),qry)-suff.begin();
         cout<<ans+1<<endl;
     }
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}