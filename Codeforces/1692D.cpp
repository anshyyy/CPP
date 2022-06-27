#include <bits/stdc++.h>
#define IOS                            \
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
int num(int n)
{
     int count = 0;
     while (n != 0)
     {
          n = n / 10;
          count++;
     }
     return count;
}
bool ispalindrome(string s)
{
     for (int i = 0; i < s.size() / 2; i++)
     {
          if (s[i] != s[s.size() - 1 - i])
               return false;
     }
     return true;
}
void solve()
{
     string s;
     int t;
     cin >> s >> t;
     int hour = t / 60;
     int minute = t % 60;
     string r = s;
     int ans = 0;
     while (1)
     {
          
          int hh = 10 * (s[0] - '0') + (s[1] - '0');
        //  cout << hh << endl;
          hh += hour;
          if (hh >= 24)
          {
               hh %= 24;
          }
          if (num(hh) == 1)
          {
               s[0] = '0';
               s[1] = char(hh + 48);
          }
          else
          {
               s[1] = char(hh % 10 + 48);
               s[0] = char(hh / 10 + 48);
          }
          int mm = 10 * (s[3] - '0') + (s[4] - '0');
          mm += minute;
          if (mm >= 60)
          {
               int hh = 10 * (s[0] - '0') + (s[1] - '0');
               hh++;
             //  cout << hh << endl;
               if (hh >= 24)
               {
                    hh %= 24;
               }
               if (num(hh) == 1)
               {
                    s[0] = '0';
                    s[1] = char(hh + 48);
               }
               else
               {
                    s[1] = char(hh % 10 + 48);
                    s[0] = char(hh / 10 + 48);
               }
               mm = mm%60;
          }
          if (num(mm) == 1)
          {
               s[3] = '0';
               s[4] = char(mm + 48);
          }
          else
          {
               s[3] = char(mm / 10 + 48);
               s[4] = char(mm % 10 + 48);
          }
          //cout << s << endl;
          if (ispalindrome(s))
          {
               ans++;
          }
          if(s[0]=='2' && s[1]=='3' && s[3]=='6' && s[4]=='0'){
               s[0]='0';
               s[1]='0';
               s[3]='0';
               s[4]='0';
          }
          if (s == r)
               break;
     }
     cout << ans << endl;
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