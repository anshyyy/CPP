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
set<ll> primeFactors(ll n)
{
    set<ll>pp;

    while (n % 2 == 0)
    {
       // cout<<n<<" ";
        pp.insert(2);
        n = n/2;
    }
    for (ll i = 3; i*i <= n; i+=2)
    {
        while (n % i == 0)
        {
            //cout << i << " ";
            pp.insert(i);
            n = n/i;
        }
    }
    if (n > 2)
       pp.insert(n);
    return pp;
}
void solve(){ 
     ll n;cin>>n;
     if(n==1){
         cout<<"1\n";
         return;
     }
    set<ll>fact= primeFactors(n);
    ll ans = 1;
    for(auto i : fact)
     ans*=i;
    cout<<ans<<endl;
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