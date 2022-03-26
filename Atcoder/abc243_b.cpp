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
     ll n;
     cin>>n;
     vector<ll>arr(n),brr(n);
     unordered_map<ll,ll>mp1,mp2;
     ll same = 0,different=0;
     loop(i,0,n){
         cin>>arr[i];
         mp1[arr[i]]=i;
     }
     loop(i,0,n){
         cin>>brr[i];
         if(mp1.find(brr[i])!=mp1.end()){
              if(mp1[brr[i]]==i){
                   same++;
              }
              else{
                  different++;
              }
         }
     }
     cout<<same<<endl<<different<<endl;

}
int main() {
int t=1;
// cin>>t;
while(t--){
 solve(); 
}
     return 0;
}