#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,k;cin>>n>>k;
        if(k<n)
        {
            k*=(n%k==0?n/k:(n/k)+1);
        }
        cout<<(k%n==0?k/n:(k/n)+1)<<endl;
    }
	return 0;
}