#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define endl '\n'

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    string a, b;
    cin >> a >> b;
    vector<ll> v;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            v.push_back(i);
        }
    }

    if (v.size() % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }

    if (v.size() == 2)
    {
        if (v[0] + 1 == v[1])
        {

            if (n == 2 || n == 3)
            {
                cout << x << endl;
            }
            else if (n == 4)
            {
                if (v[0] == 1)
                {
                    cout << x << endl;
                }
                else
                {
                    cout << min(2y, x) << endl;
                }
            }
            else
            {
                cout << min(2y, x) << endl;
            }
        }
        else
        {
            cout << y << endl;
        }
        return;
    }

    cout << ((v.size() / 2) * y) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
L