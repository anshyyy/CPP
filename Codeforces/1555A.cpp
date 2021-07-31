#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    // if(n==0) cout<<"0\n";
    // else if (n < 6)
    // {
    //     cout << 15 << endl;
    // }
    // else if (n % 6 == 0)
    // {
    //     ll a = n / 6;
    //     cout << a * 15 << endl;
    // }
    // else if (n % 8 == 0)
    // {
    //     ll a = n / 8;
    //     cout << a * 20 << endl;
    // }
    // else if (n % 10 == 0)
    // {
    //     ll a = n / 10;
    //     cout << a * 25 << endl;
    // }
    // else
    // {
    //     n = n + 1;
    //     if (n % 6 == 0)
    //     {
    //         ll a = n / 6;
    //         cout << a * 15 << endl;
    //     }
    //     else if (n % 8 == 0)
    //     {
    //         ll a = n / 8;
    //         cout << a * 20 << endl;
    //     }
    //     else if (n % 10 == 0)
    //     {
    //         ll a = n / 10;
    //         cout << a * 25 << endl;
    //     }
    // }
    long long int answ;
    if(n<=6){
        answ=15;
    }
    else {
        if(n%2!=0){
            n++;
        }
        answ=(n*5)/2;
    }
    cout<<answ<<endl;
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