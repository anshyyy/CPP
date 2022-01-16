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
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    char s[n][m];
    int b = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
            if (s[i][j] == 'B')
            {
                b++;
            }
        }
    }

    if (b == 0)
    {
        cout << "-1\n";
        return;
    }
    if (s[r][c] == 'B')
    {
        cout << "0\n";
        return;
    }
    int ans = INT_MAX, l;
    for (int j = c; j < n; j++) // front
    {
        if (s[r][j] == 'B')
        {
            l = j - c;
            ans = min(ans, l);
        }
    }
    for (int k = c; k >= 0; k--) // back
    {
        if (s[r][k] == 'B')
        {
            l = c - k;
            ans = min(ans, l);
        }
    }
    for (int m = c; m >= 0; m--) // up
    {
        if (s[m][c] == 'B')
        {
            l =  r-m;
            ans = min(ans, l);
        }
    }
    for (int n = c; n < m; n++) // down
    {
        if (s[n][c] == 'B')
        {
            l = n - c;
            ans = min(ans, l);
        }
    }
    int x = r;
    for (int i = c; i < n; i++)
    {
        
        if (s[x][i] == 'B')
        {
            l = 2;
            ans = min(ans, l);
        }
        x--;
    }
    int y = r;
    for (int i=c ; i>=0; i--)
    {
        
        if (s[y][i] == 'B')
        {
            l = 2;
            ans = min(ans, l);
        }
        y++;
    }
    int d= c;
    for (int i = r; i < n; i++)
    {
        if(s[i][d]=='B')
        {
            l = 2;
            ans = min(ans,l);
        }
        d++;
    } 
    int dh= c;
    for (int i = r; i >=0; i--)
    {
        if(s[i][dh]=='B')
        {
            l = 2;
            ans = min(ans,l);
        }
        dh--;
    }

    cout<<ans<<endl;
    
    
    
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