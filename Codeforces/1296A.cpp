#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int sum = 0;
     int odd = 0,even=0;
     vector<int>arr(n);
     loop(i,0,n)
     {
         cin>>arr[i];
         sum+=arr[i];
         if(arr[i]%2)odd++;
         else even++;
     }
     if(sum%2!=0||odd>0 && even>0){
         cout<<"YES\n";
         return;
     }
     cout<<"NO\n";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}