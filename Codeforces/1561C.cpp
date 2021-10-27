#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> cave;
   loop(i,0,n)
    {
        int k;
        cin >> k;
        vector<int> arr(k);
        loop(i, 0, k) cin >> arr[i];
        loop(i, 0, k) arr[i] -= i;
        int maxi = INT_MIN;
        loop(i,0,k)maxi=max(maxi,arr[i]);
        cave.push_back({maxi,k});
    }
    sort(cave.begin(), cave.end());
    //  for(int i =0;i<cave.size();i++){
    //      cout<<cave[i].first<<" "<<cave[i].second<<" ";
    //      cout<<endl;
    //  }
    int s = 1;
    int e = 2e9;
    int ans = e;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        int powr = mid;
        bool yes = true;
        for (auto x : cave)
        {
            if (powr <= x.first)
            {
                yes = false;
                break;
            }
            powr += x.second;
        }
        if (yes)
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    cout << ans << "\n";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}