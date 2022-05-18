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
void solve(set<char>&ss)
{
    int nxxxx;
    string text;
    cin >> nxxxx;
    cin>> text;
    long long ans = 1;
    for (char ch : text)
        if (ss.find(ch) != ss.end())
            ans = (ans * 2) % INF;
    cout << ans << '\n';
}
int main()
{
    IOS;
    int t = 1;
    cin >> t;
    set<char> s;
    s.insert('c');
    s.insert('g');
    s.insert('l');
    s.insert('r');
    while (t--)
    {
        solve(s);
    }
    return 0;
}