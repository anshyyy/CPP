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
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n), brr(n);
    loop(i, 0, n) cin >> arr[i];
    loop(i, 0, n) cin >> brr[i];
    int maxi = *max_element(all(arr));
    int maxi2 = *max_element(all(brr));
    if (maxi > maxi2)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != maxi && arr[i] < brr[i])
            {
                swap(arr[i], brr[i]);
            }
        }
        int maxiii = *max_element(all(brr));
        // loop(i,0,n)cout<<arr[i]<<" ";
        // cout<<endl;
        // loop(i,0,n)cout<<brr[i]<<" ";
        // cout<<endl;
         cout << maxi * maxiii << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (brr[i] != maxi && brr[i] < arr[i])
            {
                swap(arr[i], brr[i]);
            }
        }
        int maxii = *max_element(all(arr));
        //  loop(i,0,n)cout<<arr[i]<<" ";
        // cout<<endl;
        // loop(i,0,n)cout<<brr[i]<<" ";
        // cout<<endl;
         cout << maxi2 * maxii << endl;
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