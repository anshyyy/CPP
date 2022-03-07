#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define vii vector<int>
#define mii map<int,int>
#define all(v) v.begin(),v.end()
#define present(s,x) (find(all(s),x) != s.end())
#define ff first
#define ss second
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long

bool my(const pair<ll,ll> &x, const pair<ll,ll> &y){
    return (x.second < y.second);
}

void solve(){
    ll a, b; 
    cin>>a>>b;
    map<ll,vector<pair<ll,ll>>> m;
    for(int i =0;i<a;i++){
        for(int j = 0;j<b;j++){
            ll ai; cin>>ai;
            m[ai].push_back({i,j});
        }
    }
    ll ans=0;
    for(auto it : m){
        auto xx = it.second;
        int yo = xx.size();
        sort(all(xx));
        for(int i = 0;i<yo;i++){
            ans+=(2*i-yo+1)*xx[i].first;
        }
        sort(all(xx),my);
       for(int i = 0;i<yo;i++){
            ans+=(2*i-yo+1)*xx[i].second;
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    fast;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}