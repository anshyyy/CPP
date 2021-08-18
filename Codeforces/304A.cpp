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
    int n, count = 0;
    double c;
    cin >> n;
    
    for (int i = 1; i <=n; i++)
    {
        for (int j = i+1;j <=n; j++)
        {
            c=i*i+j*j;
            c=sqrt(c);
            if(floor(c)==c&&c<=n){
                count++;
        }
        }
        
    }
    
    cout << count << endl;
}
int main()
{
    int t = 1;
   // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}