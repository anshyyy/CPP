#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
#define pii pair<ll,ll>
#define pb push_back
#define mp make_pair
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

#define MOD 1000000007

ll add(ll x,ll y){ll res=x+y; return (res>=MOD?res-MOD:res);}
ll mul(ll x,ll y){ll res=x*y; return (res>=MOD?res%MOD:res);}
ll sub(ll x,ll y){ll res=x-y; return (res<0?res+MOD:res);}

ll dx[]={0,-1,0,1};
ll dy[]={-1,0,1,0};

ll xpowery(ll x,ll y)
{
    if(y==0)return 1;
    ll res=1;
    x%=MOD;
    if(x==0){
        return x;
    }
    else{
        while(y>0)
        {
            if(y&1)res=(1LL*res*x)%MOD;
            y>>=1;
            x=(1LL*x*x)%MOD;
        }
        return res;
    }
}
ll C(ll n,ll k,vector<ll> &fact,vector<ll> &inv)
{
    if(k>n)return 0;
    ll ans=(1LL*fact[n]*inv[k])%MOD;
    ans=(1LL*ans*inv[n-k])%MOD;
    return ans;
}
bool isPrime(ll n)
{
    if(n==1)return false;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

void solve(vector<ll> &fact,vector<ll> &inv)
{
    ll n,k;
    cin>>n>>k;
    if(k<n)
    {
        k*=(n%k==0?n/k:(n/k)+1);
    }
    cout<<(k%n==0?k/n:(k/n)+1)<<endl;
}

int main() {
    FAST
    vector<ll> fact(200005,1);
    vector<ll> inv(200005,1);
    for(ll i=2;i<200005;i++)
    {
        fact[i]=(fact[i-1]*i)%MOD;
        inv[i]=xpowery(fact[i],MOD-2);
    }
    ll t=1;
    cin>>t;
    while(t--)solve(fact,inv);
	return 0;
}