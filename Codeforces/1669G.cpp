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
    int n, m;
    cin >> n >> m;
    char v[n+7][m+7];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    for(int row = 0;row<m;row++){
        int ll = n-1;
        for(int col =n-1;col>=0;col--){
            if(v[col][row]=='o'){
                ll = col-1;
            }
            else if(v[col][row]=='*'){
                swap(v[col][row],v[ll][row]);
                ll--;
            }
        }
    }
    for (int col = 0; col < n; col++)
    {
        for (int row = 0; row < m; row++)
        {
            cout << v[col][row];
        }
        cout << endl;
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