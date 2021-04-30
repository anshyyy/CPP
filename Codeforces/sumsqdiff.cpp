#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
ll solve(int n){
    ll psum=0;
  ll nsum=0;
    for(ll i=1;i<=n;i++){
        psum+=pow(i,2);
    }
    for(ll j=1;j<=n;j++)
    {
        nsum+=j;
    }
    nsum=pow(nsum,2);
    int ans=nsum-psum;

    return ans;
}
int main() {
     int n;
     cin>>n;
     cout<<solve(n);
     return 0;
}