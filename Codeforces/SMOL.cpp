#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n>=k&&k!=0)
        { 
            
            k=k*(n/k);
        
            n= n - k ;
            cout << n << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}