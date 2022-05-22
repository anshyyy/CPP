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
     vector<ll>arr(n),t1,t2;
     loop(i,0,n)cin>>arr[i];
     sort(all(arr));
     map<ll,ll>mp;
     loop(i,0,n/2)mp[arr[i]]++;
     for(auto x : mp){
         if(x.ss==1){
             t1.push_back(x.ff);
         }
         else{
              t1.push_back(x.ff);
              t2.push_back(x.ss);
         }
     }
     mp.clear();
     loop(i,n/2,n){
         mp[arr[i]]++;
     }
     for(auto x : mp){
         if(x.ss==1){
             t2.push_back(x.ff);
         }
         else{
              t1.push_back(x.ff);
              t2.push_back(x.ff);
         }
     }
     unordered_map<int,int>s1,s2;
     for (int i = 0; i < t1.size(); i++)
     {
         s1[t1[i]]=1;
     }
     for (size_t i = 0; i < t2.size(); i++)
     {
        s2[t2[i]]=1;
     }
     cout<<min(s1.size(),s2.size())<<endl;
     
     

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