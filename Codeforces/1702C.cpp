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
     map<ll,vector<ll>>mp;
     loop(i,0,n){
        cin>>arr[i];
        mp[arr[i]].push_back(i+1);
     }
     while(q--){
        ll l,r;
        cin>>l>>r;
        if(!mp.count(l)||!mp.count(r)){
            cout<<"NO\n";
            continue;
        }
        ll src = mp[l][0];
        vector<ll>temp = mp[r];
        ll x = temp.size();
        if(src<=temp[x-1]){
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
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