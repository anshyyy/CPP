#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
void sieveoferatostheness(ll unsigned n)
{
    bool prime[n];
    memset(prime,true,sizeof(prime));
    for(ll p=2;p*p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(ll i= p*p;i<=n;i+=p)
            prime[i]=false;
        }
    }
    ll count=0;
    for(ll p=2;p<=n;p++)
    {
        if(prime[p])
        count++;
        if(count==10001)
        {
            cout<<p;
            break;
        }
    }
}
int main() {

     ll unsigned n = 999999;
     sieveoferatostheness(n);


     return 0;
}