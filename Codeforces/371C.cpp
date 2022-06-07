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
bool isPossible(ll b,ll s,ll c,ll nb,ll ns,ll nc,ll pb,ll ps,ll pc,ll money,ll mid){
    ll total = max(0LL,(mid*b)-nb)*pb + max(0LL,(mid*s)-ns)*ps + max(0LL,(mid*c)-nc)*pc;
    return total<=money;
}
void solve(){ 
     string t;
     cin>>t;
     ll nb,ns,nc;
     cin>>nb>>ns>>nc;
     ll pb,ps,pc;
     cin>>pb>>ps>>pc;
     ll money;cin>>money;
     ll b = count(all(t),'B');
     ll s = count(all(t),'S');
     ll c = count(all(t),'C');
     ll low = 0;
     ll high = 2e12;
     while(low+1<high){
         ll mid = low + (high-low)/2;
         if(isPossible(b,s,c,nb,ns,nc,pb,ps,pc,money,mid)){
             low = mid;
         } else{
             high = mid;
         }
     }
     cout<<low<<endl;
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