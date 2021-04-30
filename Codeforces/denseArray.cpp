#include <bits/stdc++.h>
#define IOS                            \
     ios_base::sync_with_stdio(false); \
     cin.tie(NULL);
#define ll long long int
using namespace std;
int solve()
{
     int n;
     cin >> n;
     vector<int> a(n);
     for (int i = 0; i < n; i++)
          cin >> a[i];

     int ans = 0;
     for (int i = 0; i < n - 1; i++)
     {
          int mn = min(a[i], a[i + 1]);
          int mx = max(a[i],a[i+1]);
          while (mn * 2 < mx)
          {
               ans++;
               mn *= 2;
          }
     }
     cout << ans << "\n";
     return 0;
}
int main()
{
     int t;
     IOS;
     cin >> t;
     while (t--)
     {
          solve();
     }
     return 0;
}