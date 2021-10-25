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
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    vector<int> v[n + 1];
    v[0] = a;
    for (int k = 1; k <= n; k++) {
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }
        loop(i,0,n+1)cout<<freq[i]<<" ";
        cout<<endl;
 
        for (int i = 0; i < n; i++) {
            a[i] = freq[a[i]];
        }
        loop(i,0,n)cout<<a[i]<<" ";
        cout<<endl;
        loop(i,0,n)cout<<v[i]<<" ";
        cout<<endl;
 
        v[k] = a;
       
    }
 
    int q;
    cin >> q;
 
    while (q--) {
        int x, k;
        cin >> x >> k;
 
        if (k > n) {
            cout << v[n][x - 1] << endl;
        } else {
            cout << v[k][x - 1] << endl;
        }
    }

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}