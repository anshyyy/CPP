#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
ll lcm(int n)
{
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
        ans = (ans * i) / (__gcd(ans, i));

    return ans;
}
int main()
{
    int i;
    cin >> i;
    cout << lcm(i);
    return 0;
}