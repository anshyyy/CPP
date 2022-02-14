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
    int n;
    cin >> n;
    vector<pair<int, int>> match;
    loop(i, 1, n + 1)
    {
        loop(j, i + 1, n + 1)
        {
            match.push_back({i, j});
        }
    }
    // for(auto x:match) cout<<x.first<<" "<<x.second<<endl;
    int mat = (n * (n - 1) / 2);
    int ties = mat % n;
    int rem = mat - ties;
    int reqWins = rem / n;
    vector<int> visited(n + 1);
    int x = 1, y = 2;
    loop(i, 1, n + 1) visited[i] = reqWins;
    for (auto ai : match)
    {
        int ff = ai.first;
        int ss = ai.second;

        if (ff == x && ss == y && ties > 0)
        {
            cout << "0 ";
           // cout << x << " " << y << endl;
            ties--;
            x += 2;
            y += 2;
        }
        else if (visited[ff] > 0)
        {
            cout << "1 ";
            visited[ff]--;
        }
        else if (visited[ff] == 0 && visited[ss] != 0)
        {
            cout << "-1 ";
            visited[ss]--;
        }
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