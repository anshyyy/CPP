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
    int n, odd = 0, even = 0;
    bool eve = false, od = false;
    cin >> n;
    int arr[n];
    loop(i, n) cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2)
            odd++;
        else
            even++;
    }
    if (abs(even - odd) > 1)
    {
        cout << "-1\n";
        return;
    }
    // int i = 1, j = i + 1;
    // int ans = 0;
    // while (i < n&&i<=j)
    // {
    //     if (arr[i] % 2)
    //     {
    //             if (arr[j] % 2 == 0)
    //             {
    //                 swap(arr[j], arr[i]);
    //                 ans += j - i;
    //                 //cout<<j<<" "<<i<<" "<<ans<<endl;
    //                 i+=2;
    //             }
    //             else
    //                 j++;
    //         }
    //     else
    //     {
    //             if (arr[j] % 2)
    //             {
    //                 swap(arr[j], arr[i]);
    //                 ans += j - i;
    //                //  cout<<j<<" "<<i<<" "<<ans<<endl;
    //                   i+=2;
    //                   j=i;
    //             }
    //             else
    //                 j++;
    //      }
    //     // i++;
    //     }
    //  loop(i, n) cout << arr[i] << " ";
    //  cout << endl;
    // cout << ans << endl;
    if(odd>even) odd=1;
    else odd=0;
    ll j=0,ans=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==odd){
            ans+=abs(j-i);
            j+=2;
        }
    }
    if(n%2){
        cout<<ans<<endl;
        return;
    }
    ll an=0;
    j=0;
    for (int i = 0; i <n; i++)
    {
        if(arr[i]%2!=odd){
            an+=abs(j-i);
            j+=2;
        }

    }
    cout<<min(ans,an)<<endl;

    

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