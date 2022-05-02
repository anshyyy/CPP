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
unordered_map<int, vector<int>> store;
int Fy(vector<int> &arr, int n, int left, int right, int element)
{

    int a = lower_bound(store[element].begin(), store[element].end(),left)-store[element].begin();

    int b = upper_bound(store[element].begin(),store[element].end(),right)-store[element].begin();

    return b - a;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    loop(i, 0, n) cin >> arr[i];
     for (int i=0; i<n; ++i)
        store[arr[i]].push_back(i+1); 
    int q;
    cin >> q;
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        cout <<Fy(arr, n, l, r, x) <<endl;
    }
}
int32_t main()
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