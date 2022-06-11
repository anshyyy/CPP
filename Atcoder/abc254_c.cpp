#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
bool fun(vector<ll>&arr, ll n, ll k)
{
    vector<ll> v;
 
    // Iterate over all elements until K
    for (int i = 0; i < k; i++) {
        // Store elements as multiples of K
        for (int j = i; j < n; j += k) {
            v.push_back(arr[j]);
        }
 
        // Sort the elements
        sort(v.begin(), v.end());
 
        ll x = 0;
 
        // Put elements in their required position
        for (int j = i; j < n; j += k) {
            arr[j] = v[x];
            x++;
        }
 
        v.clear();
    }
 
    // Check if the array becomes sorted or not
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}
void solve(){ 
     ll n,k;cin>>n>>k;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     if(fun(arr,n,k))cout<<"Yes\n";
     else cout<<"No\n";
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}