#include<bits/stdc++.h>
 
using namespace std;
 
#define modd 998244353
#define ll long long
#define mod 1000000007
#define cbit __builtin_popcountll
#define pl pair<long, long>
#define double long double
#define pqp priority_queue<pl>
#define mkp make_pair
#define vl vector<ll>
#define vvl vector<vl>
#define pb push_back
#define inf 1000000000000000000
#define all(v) v.begin(), v.end()
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
 
    ll t = 1;
    cin>>t;
 
    while (t--)
    {
        ll n;
        cin>>n;
        vl arr(n);
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vvl res;
        for(ll i=n-1;i>0;i--)
        {
            ll maxi=-inf;
            ll ind=-1;
            for(ll j=0;j<=i;j++)
            {
                if(maxi<arr[j])
                {
                    maxi=arr[j];
                    ind=j;
                }
            }
            if(ind==i)
            {
                continue;
            }
            else{
                vl te;
                vl tv(n);
                for(ll j=0;j<=i;j++)
                {
                    tv[j]=arr[(j+ind+1)%(i+1)];
                }
                arr=tv;
                res.push_back({1,i+1,ind+1});
            }
        }
        cout<<res.size()<<"\n";
        for(auto itr:res)
        {
            for(auto x:itr)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }
 
    }
    return 0;
}