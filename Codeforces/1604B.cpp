#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     bool flag = false;
     vector<int>arr(n+1);
     loop(i,1,n+1){
         cin>>arr[i];
         if(arr[i]<=arr[i-1])flag = true;
         }
    if(n%2==0||flag){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}