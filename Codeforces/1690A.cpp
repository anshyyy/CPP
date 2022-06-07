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
    //  int mid = n/2;
    //  n = n - mid;
    // // cout<<n<<endl;
    // if (n % 2)
    // {
    //     cout << (n / 2)+1 << " " << mid << " " << n / 2 << endl;
    // }
    // else
    // {
    //     cout << (n / 2 )+1 << " " << mid+1 << " " << (n / 2)-1  << endl;
    // }
    if(n%3==0){
        cout<<n/3<<" "<<n/3+1<<" "<<n/3-1<<endl;
    }
    else if(n%3==1){
        cout<<n/3<<" "<<n/3+2<<" "<<n/3-1<<endl;
    }
    else {
        cout<<n/3+1<<" "<<n/3+2<<" "<<n/3-1<<endl;
    }
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