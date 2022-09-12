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
map<char, vector<int>> mp;
int ans;
void solve()
{
    string s;
    ans=0;
    mp.clear();
    cin >> s;
    int n = s.size();
       loop(i,1,n-1)  mp[s[i]].push_back(i + 1);
    if (s[0] > s[n - 1])
    {
         for (auto i = s[0]; i >= s[n - 1]; i--)
            ans += mp[i].size();
        cout << s[0] - s[n - 1] << ' ' << ans + 2 << endl;
        cout << 1 << ' ';
        for (char i = s[0]; i >= s[n - 1]; i--)
            for (auto e : mp[i])
                cout << e << ' ';
        cout << n << endl;
    }
    else
    {
        for (char i = s[0]; i <= s[n - 1]; i++)
            ans += mp[i].size();
        cout << s[n - 1] - s[0] << ' ' << ans + 2 << endl;
        cout << 1 << ' ';
        for (char i = s[0]; i <= s[n - 1]; i++)
            for (auto e : mp[i])
                cout << e << ' ';
        cout << n << endl;
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