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
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
void solve()
{
    //we have to find maximum lexicographic permutation
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    vector<int> arr(n);
    loop(i, 0, n)
    {
        cin >> arr[i];
        mp[arr[i]] = i;
    }
    int r = n;
    for (int i = n; i > 0; i--)
    {
        if (mp[i] >= r)
            continue;
        //  cout<<mp[i]<<" : ";
        for (int x = mp[i]; x < r; x++)
        {
            cout << arr[x] << " ";
        }
        r = mp[i];
    }
    cout << endl;
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