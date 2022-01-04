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
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        cout << s[0] << s[0] << endl;
        return;
    }
    string res="";
     res+=s[0];
    for (int i = 1; i < n; i++)
    {
        if(s[i-1]<s[i]||(s[i-1]==s[i]&&s[i]==s[0])) break;
        res+=s[i];
    }
    for (int i = res.size()-1; i >=0; i--)
    {
        res+=res[i];
    }
    cout<<res<<endl;
    
    
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