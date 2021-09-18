#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
using namespace std;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(m);
    loop(i, m) cin >> arr[i];
    sort(arr.begin(), arr.end());
     if (m == 1 || m == 0) {
        if (m == 0 || (arr[0] != 1 && arr[0] != n))
            cout << "YES";
        else
            cout << "NO";
        return ;
    }
    if (binary_search(arr.begin(), arr.end(), 1) || binary_search(arr.begin(), arr.end(), n))
    {
        cout << "NO\n";
        return;
    }
    else
    {
        bool ans = true;
        int prev = -1, curr = arr[0], next;
        for (int i = 1; i < m; i++)
        {
            next = arr[i];
            if (prev + 1 == curr && curr + 1 == next)
            {
                ans = false;
                break;
            }
            prev = curr;
            curr = next;
        }
        ans ? cout << "YES\n" : cout << "NO\n";
    }
}

int main()
{
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}