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
    int n, b, k = 0, cnt = 0;
    cin >> n >> b;
    vector<int> arr(n), d;
    loop(i, 0, n) cin >> arr[i];
    int f = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] % 2)
            f++;
        else
            f--;
        if (f == 0)
        {
            d.push_back(abs(arr[i] - arr[i + 1]));
        }
    }
    sort(all(d));
    loop(i,0,d.size())cout<<d[i]<<" ";
    for (int i = 0; i < d.size(); i++)
    {
        if (b >= 0 && (b-d[i])>=0)
        {
            b -= d[i];
            cnt++;
        }
    }
    cout << cnt << endl;
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