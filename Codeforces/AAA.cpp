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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string spec = "#@*&";
    bool Uc = false, Lc = false, Sc = false, Num = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            Lc = true;
        if (s[i] >= 'A' && s[i] <= 'Z')
            Uc = true;
        if (s[i] == '#' || s[i] == '@' || s[i] == '*' || s[i] == '&')
            Sc = true;
        if (s[i] >= '0' && s[i] <= '9')
            Num = true;
    }
    if(n>=7){
        if(Sc&&Lc&&Uc&&Num){cout<<s<<endl;
        return;
        }
    }
    if (!Sc)
        s += '@';
    if (!Num)
        s += '1';
    if (!Lc)
        s += 'a';
    if (!Uc)
        s += 'A';
    while(s.size()<7) s+= 'a';
    cout<<s<<endl;
}
int main()
{
    IOS;
    int t = 1;
    cin >> t;
    for (int i = 1; i <=t; i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }
    
    return 0;
}