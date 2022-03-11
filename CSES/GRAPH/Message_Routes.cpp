#include <bits/stdc++.h>
#define IOS                            \
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
     ll n, m;
     cin >> n >> m;
     vector<ll> g[n+1];
     bool vis[n+1];
     vector<ll> p(n+1);
     vector<ll> dist(n+1);
     queue<ll> q;
     loop(i, 0, m)
     {
          ll u, v;
          cin >> u >> v;
          g[u].push_back(v);
          g[v].push_back(u);
     }
     q.push(1);
     vis[1] = true;
     while (!q.empty())
     {
          ll u = q.front();
          q.pop();
          for (auto v : g[u])
          {
               if (!vis[v])
               {
                    dist[v] = dist[u] + 1;
                    vis[v] = true;
                    p[v] = u;
                    q.push(v);
               }
          }
     }
     if (!vis[n])
     {
          cout << "IMPOSSIBLE\n";
          return;
     }
     ll u = n;
     ll K = dist[n];
     vector<ll> ans(K + 1);
     for (int i = K; i >= 0; i--)
     {
          ans[i] = u;
          u = p[u];
     }
     cout << K + 1 << endl;
     for (int i = 0; i <= K; i++)
          cout << ans[i] << " ";
     cout << endl;
}
int main()
{
     IOS
     int t = 1;
     // cin >> t;
     while (t--)
     {
          solve();
     }
     return 0;
}