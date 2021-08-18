#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define N 1010100
typedef long long ll;
using namespace std;
int arr[N];
void solve(){ 
     int i, j, k;
    int n, m;
    int a, b, c;
    cin >> a >> b >> c;

    m = a * b * c;
    
    memset(arr, 0, sizeof(arr));
    for(i = 1; i <= m; i++)
    {
        for(j = i; j <= m; j += i)
            arr[j]++;
    }
   // loop(i,m+5)cout<<arr[i]<<" " ;

    ll ans = 0, mod = 1073741824;
    for(i = 1; i <= a; i++)
    {
        for(j = 1; j <= b; j++)
        {
            for(k = 1; k <= c; k++)
            {
                ans += arr[i * j * k];
                ans = ans % mod;
            }
        }
    }

    cout << ans;
    
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}