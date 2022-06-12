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
     ll n,q;cin>>n>>q;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     vector<ll>pre(n+1);
     sort(allr(arr));
     pre[0]=0;
     for (int i = 1; i <n+1; i++)
     {
         pre[i]=arr[i-1]+pre[i-1];
     }
     while(q--){
         ll x,y;cin>>x>>y;
         if(x-y<=0){
             cout<<pre[x]<<endl;
             continue;
         }
         cout<<pre[x]-pre[x-y]<<endl;
     }
}
int main() {
IOS;
int t=1;
while(t--){
 solve(); 
}
     return 0;
}