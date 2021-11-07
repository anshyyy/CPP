#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
    ll n,k,x,count=0;
    cin>>n>>k>>x;
    vector<ll>arr(n),b(n);
    loop(i,0,n)cin>>arr[i];
    sort(arr.begin(),arr.end());
    for(int i = 0 ;i<n-1;i++)
    b[i]=max(0LL,(arr[i+1]-arr[i]-1)/x);

    sort(b.begin(),b.end()-1);
    for (size_t i = 0; i <n-1; i++)
    {
        if(b[i]<=k){
            k-=b[i];
            count++;
        }
    }
    cout<<n-count<<endl;
    
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}