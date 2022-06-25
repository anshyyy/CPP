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
    int cnt = 0;
    int j;
    bool yes = false;
    bool rr = false;
    char s[8][8];
    loop(i, 0, 8)
    {
        loop(j, 0, 8) cin >> s[i][j];
    }

    for (int i = 0; i < 8; i++)
    {

        for (j = 0; j < 8; j++)
        {
            if (s[i][j] == '#')
                cnt++;
            if (cnt == 2)
            {
                yes = true;
            }
        }

        if (yes && cnt == 1)
        {
            for (int k = 0; k < 8; k++)
            {
                if (cnt == 1 && yes && s[i][k] == '#')
                {
                    cout << i + 1 << " " << k + 1 << endl;
                    rr = true;
                    i = 9;
                    return;
                }
            }
        }
        cnt = 0;
        if (rr)
            return;
    }
}
int main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}