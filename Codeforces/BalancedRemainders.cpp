#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     
ll t = 1;
    std::cin >> t;
    while (t--)
    {
        ll n, i, j = 0;
        std::cin >> n;
        ll a[n], c0 = 0, c1 = 0, c2 = 0;
       for(ll i=0;i<n;i++)
        {
            cin >> a[i];
            if (a[i] % 3 == 0)
                c0++;
            else if (a[i] % 3 == 1)
                c1++;
            else
                c2++;
        }
        ll ans = n / 3; ll co = 0;
        if (c0 > ans)
        {
            co += c0 - ans;
            c1 += c0 - ans;
            c0 = ans;
            if (c1 > ans)
            {
                co += c1 - ans;
                c2 += c1 - ans;
            }
            else if (c1 != ans)
            {
                co += (c2 - ans) * 2;
            }
            cout << co << "\n";
            continue;
        }
        else if (c1 > ans)
        {
            co += c1 - ans;
            c2 += c1 - ans;
            if (c2 > ans)
            {
                co += c2 - ans;
                c2 += c1 - ans;
            }
            else if (c2 != ans)
            {
                co += (c0 - ans) * 2;
            }
            cout << co << "\n";
            continue;
        }
        else if (c2 > ans)
        {
            co += c2 - ans;
            c0 += c2 - ans;
            if (c0 > ans)
            {
                co += c0 - ans;
                // c2+=c1-ans;
            }
            else if (c0 != ans)
            {
                co += (c0 - ans);
            }
            cout << co << "\n";
            continue;
        }
        cout << 0 << "\n";
    }

     return 0;
}