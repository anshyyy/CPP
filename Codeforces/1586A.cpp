#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
bool isComposite(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return false;
    if (n % 2 == 0 || n % 3 == 0)
        return true;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return true;

    return false;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> index;
    loop(i, 0, n) cin >> arr[i];

    int sum = accumulate(arr.begin(), arr.end(), 0);
    if (isComposite(sum))
    {
        cout << n << endl;
        loop(i, 1, n + 1) cout << i << " ";
        cout << endl;
        return;
    }
    int b[n];
    partial_sort_copy(arr.begin(), arr.end(), b, b + n);
    for (int i = 0; i < n; i++)
    {
        int x = b[i];
        sum = sum - x;
        if (isComposite(sum))
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != x)
                {
                    index.push_back(i + 1);
                }
            }
            cout << index.size() << endl;
            loop(i, 0, index.size())
                    cout
                << index[i] << " ";
            cout << endl;
            return;
        }
        else sum = sum + x;
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