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
ll summ(ll n)
{
    ll sum = 0;
    for (ll i=1; i*i<=n; i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
               sum+=i;
            else {
                sum+=i;
                sum+=n/i;
            }
        }
    }
    return sum;
}
void solve(){ 
     ll n ; cin>>n;
     cout<<summ(n)<<endl;
}
int main() {
IOS;
int t=1;

while(t--){
 solve(); 
}
     return 0;
}