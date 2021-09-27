#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    char arr[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == 'W')
            {
                if (arr[i + 1][j] == 'P' || (arr[i][j + 1] == 'P') || (arr[i - 1][j] == 'P') || (arr[i][j - 1] == 'P'))
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
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