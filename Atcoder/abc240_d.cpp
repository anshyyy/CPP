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
     ll n,count =1;;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     stack<ll>s;
     vector<ll>ans;
     vector<pair<ll,ll>>cc;
     s.push(arr[0]);
     cc.push_back({arr[0],1});
     ans.push_back(1);
     for(int i = 1;i<n;i++){
         int x = arr[i];
         s.push(x);
         if(cc[i-1].first==x){
            cc.push_back({x,cc[i].second=cc[i-1].second+1});
         }
         else {
             cc.push_back({x,1});
             count = 1;
         }
     }
     loop(i,0,n)cout<<cc[i].first<<" "<<cc[i].second<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}