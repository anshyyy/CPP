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
    int n, s;
    cin >> n >> s;
    vector<int> arr(n);
    loop(i, 0, n) cin >> arr[i];
    int sum = accumulate(all(arr), 0);
    if (sum < s)
    {
        cout << -1 << endl;
        return;
    }
    if (sum == s)
    {
        cout << "0\n";
        return;
    }
    int i = 0;
    int j = n - 1;
    int ans = 0;
    while (i < j)
    {
        if (sum == s)
        {
            break;
        }
        if (arr[i] >= arr[j] && arr[i] == 1)
        {
            sum--;
            i++;
        }
        else if (arr[i] == arr[j] && arr[i] == 0)
        {
            int minifromleft = 0;
            int minifromright = 0;
            int x = i, y = j;
            while (minifromleft == minifromright && x < n && y >= 0)
            {
                int k = x;
                while (arr[k] != 1 && k<n)
                {
                    k++;
                }
                minifromleft = k - i;
                x = k + 1;
                k = y;
                while (arr[k] != 1 && k>=0)
                {
                    k--;
                }
                minifromright = j - k;
                y = k - 1;
            }
            if (minifromleft < minifromright)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        else
        {
            sum--;
            j--;
        }
        ans++;
    }
    (sum == s) ? cout << ans << endl : cout << "-1\n";
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