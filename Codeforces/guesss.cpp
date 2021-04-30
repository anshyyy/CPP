#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll ans = 0;
        ll i = 1;
        for (ll i = 1; i <= 1000; i++)
        {
            cout << i * i << endl;
            cin >> ans;
            if (ans == 0)
                            continue;
            
            else if (ans == 1)
                            break;
            
            else
                            break;
            
        }
        if (ans == -1)
                    break;
        
    }
    return 0;
}