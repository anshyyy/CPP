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
     ll n,k;cin>>n>>k;
     vector<ll>arr(n);
     map<ll,ll>mp;
     loop(i,0,n){
         cin>>arr[i];
         mp[arr[i]]++;
     }
     sort(all(arr));
     for (auto i : arr)
     {
         ll x = i;
       //  cout<<x<<" ";
        while(mp[x*k]>0 && mp[x]>0){
                 mp[x]--;
                 mp[k*x]--;
             }
     }
     ll cnt=0;
     for(auto i : mp){
        cnt += i.ss;
     }
     cout<<cnt<<endl;
     

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