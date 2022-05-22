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
     map<ll,ll>mp;
     ll l = 0;
     ll sum = 0;
     loop(i,0,n){
         cin>>arr[i];
         mp[i]=arr[i];
         sum+=arr[i];
     }
     while(q--){
         ll t,id,x;cin>>t;
         if(t==1){
             cin>>id>>x;
             if(mp[id-1]==0) sum -=l;
             else sum -= mp[id-1];
             sum+=x;
             mp[id-1]=x;
         }
         else{
            cin>>x;
            mp.clear();
            sum = x*n;
            l = x;
         }
         cout<<sum<<endl;
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