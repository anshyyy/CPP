#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 998244353
using namespace std;

ll l, r, ans;
ll o2[23], o1[23], z1[23], z2[23];

void dothis1(ll b){
    ll pos=0;
    for(int i=0;i<=18;i++){
            if(b%2) o1[i]++;
            else    z1[i]++;
            b/=2;
    }
}

void dothis2(ll a){
    ll pos=0;
    for (ll i = 0; i <=18; i++)
    {
            if(a%2) o2[i]++;
            else    z2[i]++;
            a/=2;
    }
}

void solve(){
    memset(z1, 0LL, sizeof(z1));
    memset(z2, 0LL, sizeof(z2));
    memset(o1, 0LL, sizeof(o1));
    memset(o2, 0LL, sizeof(o2));
    cin>>l>>r;
    for(int i=l;i<=r;i++)  dothis1(i);
    for(int i=l;i<=r;i++){
            ll d;
            cin>>d;
            dothis2(d);
    }
    ans=0;
    ll y=1;
    for(int i=0;i<=20;i++){
        if(o1[i]!=o2[i] or z1[i]!=z2[i])  ans+=y;
        y*=2;
    }
    cout<<ans<<endl;
}

int main(){
    fast;
    ll t = 1;
    cin>>t;
    while(t--)  solve();
    return 0;
}