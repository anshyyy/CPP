#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
int countGreater(vector<ll>&arr, ll n, ll k)
{
    int l = 0;
    int r = n - 1;
 
    // Stores the index of the left most element
    // from the array which is greater than k
    int leftGreater = n;
 
    // Finds number of elements greater than k
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // If mid element is greater than
        // k update leftGreater and r
        if (arr[m] >= k) {
            leftGreater = m;
            r = m - 1;
        }
 
        // If mid element is less than
        // or equal to k update l
        else
            l = m + 1;
    }
 
    // Return the count of elements greater than k
    return (n - leftGreater);
}
void solve(){ 
     ll n ,q;
     cin>>n>>q;
     vector<ll>arr(n);
     loop(i,0,n){
         cin>>arr[i];
     }
     sort(arr.begin(),arr.end());
     while(q--){
         ll x;
         cin>>x;
         ll count = 0;
         count = countGreater(arr,n,x);
         cout<<count<<endl;
         
         count= 0;
     }
      cout<<endl;
}
int32_t main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}