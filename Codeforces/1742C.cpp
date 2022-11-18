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
void printarr(int arr[], int n)
{
    loop(i, 0, n) { cout << arr[i] << " "; }
    cout << endl;
}
void printvec(vector<int> &arr)
{
    loop(i, 0, arr.size()) { cout << arr[i] << " "; }
    cout << endl;
}
void solve()
{
    vector<vector<char>> pat(8, vector<char>(8));
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> pat[i][j];
        }
    }
    char ans = '#';

    for (int i = 0; i < 8; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 8; j++)
        {
            if (pat[i][j] == 'R')
            {
                cnt++;
                if (cnt == 8 )
                {
                    cout<<"R\n";
                    return;
                }
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 8; j++)
        {
            if (pat[j][i] == 'B')
            {
                cnt++;
                if (cnt == 8)
                {
                    cout<<"B\n";
                    return;
                }
            }
        }
    }
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