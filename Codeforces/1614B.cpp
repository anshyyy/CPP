#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
   int n;
    cin >> n;
    vector<int> a(n);
    loop(i,0,n)cin>>a[i];
    vector<pair<int, int>> str;
    for (int i = 0; i < n; ++i) {
        str.push_back({a[i], i});
    }
    sort(str.rbegin(),str.rend());
    int inc = 1;
    int sum = 0;
    vector<int> ans(n);
    for (int i = 0; i < n; i += 2) {
        sum += 2 * inc * str[i].first;
        ans[str[i].second] = inc;
        if (i + 1 < n) {
            ans[str[i + 1].second] = -inc;
            sum += 2 * inc * str[i + 1].first;
        }
        inc ++;
        cout<<sum<<endl;
    }
    cout << sum << endl;
    cout << 0 << " ";
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}