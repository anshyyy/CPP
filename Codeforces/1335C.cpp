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
void solve(){ 
     ll n;cin>>n;
     vector<ll>cnt(n+1);
     for (int i = 0; i <n; i++)
     {
          int x;cin>>x;
          cnt[x]++;
     }
     ll mx=*max_element(all(cnt));  //most frequent element
     ll diff = n+1 - count(all(cnt),0);// finding unique elements
    // cout<<diff<<endl;
     cout<<max(min(mx-1,diff),min(mx,diff-1))<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}