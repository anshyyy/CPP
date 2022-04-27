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
     ll n;cin>>n;
     vector<ll>arr(n+1);
     loop(i,1,n+1)cin>>arr[i];
     ll l=-1,r=0;
     for (int i = 1; i < n; i++)
     {
         if(arr[i]==arr[i+1]){
             if(l==-1) l = i;
             r = i;
         }
     }
    if(l==r||l==-1)cout<<"0\n";
    else cout<<max(1LL,r-l-1LL)<<endl;
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}