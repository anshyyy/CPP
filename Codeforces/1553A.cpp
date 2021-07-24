#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
using namespace std;
ll getSum(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
void solve()
{
    ll n;
    cin >> n;
    int count = 0;
    if(n%10==9){
        cout<<(n+1)/10<<endl;
    }
    else if (n <= 60)
    {
        for (ll i = 1; i <= n; i++)
        {
            if (getSum(i) > getSum(1 + i))
                count++;
        }
        cout << count << endl;
    }
    else
    {
        cout << n / 10 << endl;
    }
}
int main()
{
    IOS
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}