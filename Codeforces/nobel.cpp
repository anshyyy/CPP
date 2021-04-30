#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
#define MOD 1000000007

void solve()
{
    ll n,m;cin>>n>>m;
    unordered_set<ll> uni;
    for(ll i=0;i<m;i++)uni.insert(i+1);
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        if(uni.find(x)!=uni.end())uni.erase(x);
    }
    if(uni.size())cout<<"YES\n";
    else cout<<"NO\n";
}


int main() {
    FAST
    ll t;cin>>t;
    while(t--)
    solve();
	return 0;
}