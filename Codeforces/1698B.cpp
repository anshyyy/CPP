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
void solve(){ 
     int n,k;cin>>n>>k;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     int ans = 0;
     for (int i = 1; i < n-1; i++)
     {
        if(arr[i]> arr[i-1]+arr[i+1]) ans++;
     }
     if(k==1){
        cout<<(n-1)/2<<endl;
        return;
     }
     cout<<ans<<endl;
     
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