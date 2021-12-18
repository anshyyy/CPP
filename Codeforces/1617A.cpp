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
bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}
void solve()
{
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    if (!isSubSequence(t, s, t.size(), s.size()))
    {
        cout << s << endl;
        return;
    }
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='a'){
            cout<<s[i];
            flag=true;
        }
    }
    
    if (t[1] == 'b' && t[2] == 'c' && flag == true)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'c')
            {
                cout << s[i];
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                cout << s[i];
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'a' && s[i] != 'b' && s[i] != 'c')
            {
                cout << s[i];
            }
        }
    }
    else if (t[1] == 'c' && t[2] == 'b')
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                cout << s[i];
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'c')
            {
                cout << s[i];
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'a' && s[i] != 'b' && s[i] != 'c')
            {
                cout << s[i];
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'a')
            {
                cout << s[i];
            }
        }
    }
    cout << "\n";
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