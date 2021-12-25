#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
int findSubarraySum(vector<ll>&arr, int n, int sum)
{
    unordered_map<ll, ll> prevSum;
    ll res = 0;
    ll currsum = 0;
    for (int i = 0; i < n; i++) {
        currsum += arr[i];
        if (currsum == sum)
            res++;
        if (prevSum.find(currsum - sum) != prevSum.end())
            res += (prevSum[currsum - sum]);
        prevSum[currsum]++;
    }
    return res;
}
void solve(){ 
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    loop(i,0,n)cin>>arr[i];
    ll ans = findSubarraySum(arr,n,k);
    cout<<ans<<endl; 
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}