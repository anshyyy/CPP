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
    int n;
    cin >> n;
    vector<int> arr(n), brr(n);
    vector<pair<int, int>> ans;
    loop(i, 0, n) cin >> arr[i];
    loop(i, 0, n) cin >> brr[i];
    loop(i, 0, n) ans.push_back({arr[i], brr[i]});
    sort(all(ans));
    vector<vector<int>> pp;
    // for(auto i : ans)cout<<i.ff<<" "<<i.ss<<endl;
    // cout<<endl;
    for (int i = 0; i < n; i++)
    {
        vector<int> mm;
        if (arr[i] != ans[i].ff || brr[i] != ans[i].ss)
        {       
            
            for (int k = i + 1; k < n; k++)
            {
                if (arr[k] == ans[i].ff && brr[k] == ans[i].ss)
                {

                    swap(arr[i], arr[k]);
                    swap(brr[i], brr[k]);
                    mm.push_back(i + 1);
                    mm.push_back(k + 1);
                    pp.push_back(mm);
                    mm.clear();
                }
            }
        }
    }
    bool my = true;
    for (int i = 1; i < n; i++)
    {
        if (ans[i].ff >= ans[i - 1].ff && ans[i].ss >= ans[i - 1].ss)
        {
        }
        else
            my = false;
    }
    if (my)
    {
        cout << pp.size() << endl;
        for (auto i : pp)
        {
            for (auto x : i)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "-1\n";
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