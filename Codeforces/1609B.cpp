#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (int i = a; i <= n; ++i)
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
int n,ans;
const int N = 1e5+3;
char s[N];
void search(int i, int val)
{
    if (i < 3 || i > n)
        return;
    if (s[i-2]=='a'&&s[i-1]=='b'&&s[i]=='c')ans+=val;
}
void solve()
{
    int q;
    cin >> n >> q;
    cin >> s+1;
    loop(i,3,n) search(i,1);
    while (q--)
    {
        int x;
        char a;
        cin >> x >> a;
        loop(i,x-2,x+2)search(i,-1);
        s[x] = a;
        loop(i,x-2,x+2)search(i,1);
        cout <<ans << endl;
    }
}
int main()
{
    IOS
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}