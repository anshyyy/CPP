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
ll n;
int x,y;
bool ispossible(ll mid){
    if(mid < min(x,y)) return false;
    mid -= min(x,y); // we have made a copy by greedly subtracting minimum from x,y;
    return ((mid/x)+(mid/y)+1>=n);
}
void solve(){ 
     cin>>n;
     cin>>x>>y;
     ll l = 0;
     ll r = n*max(x,y);
     while(l+1<r){
         ll mid = l+(r-l)/2;
         if(ispossible(mid)){
             r = mid;
         }
         else{
             l = mid;
         }
       //  cout<<l<<" "<<mid<<" "<<r<<endl;
     }
    cout<<r<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}