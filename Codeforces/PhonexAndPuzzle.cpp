#include <bits/stdc++.h>
#define ll long long int
#define pii pair<ll,ll>
#define pb push_back
#define mp make_pair
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

#define MOD 1000000007
/*
   notes
*/

void solve()
{
  ll n; cin >> n;
  bool is = false;
  if (n % 2 == 0)
  {
    ll x = n / 2;
    ll sq = sqrt(x);
    if (sq * sq == x)is = true;
  }
  if (n % 4 == 0)
  {
    ll x = n / 4;
    ll sq = sqrt(x);
    if (sq * sq == x)is = true;
  }
  cout << (is ? "YES\n" : "NO\n");
}

int main() {
  FAST
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  ll t = 1;
  cin >> t;
  while (t--)solve();
  return 0;
}