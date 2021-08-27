#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] - '0') != 2 && (s[i] - '0') != 3 && (s[i] - '0') != 5 && (s[i] - '0') != 7)
        {
            cout << "1\n"
                 << s[i] << endl;
            return;
        }
    }
    int k;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            k = s[i] - '0';
            k *= 10;
            k += (s[j] - '0');
            if (isprime(k) == false)
            {
                cout << "2\n"
                     << k << endl;
                break;
            }
        }
        if (isprime(k) == false)
            break;
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