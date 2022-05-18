#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
#define all(v) (v).begin(), (v).end()
#define all1(v) (v).begin() + 1, (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define allr1(v) (v).rbegin() + 1, (v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a % 2 == 0)
    {
        if (b-a >= 2)
            cout << a << " " << a + 2 << endl;
        else
            cout << "-1\n";
    }
    else
    {
        if (a + 3 <= b)
        {
            if (a%3==0)
            {
                cout << a << " " << a + 3 << endl;
            }
            else {
                cout<<a+1<<" "<<a+3<<endl;
            }
        }
        else cout<<"-1\n";
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}