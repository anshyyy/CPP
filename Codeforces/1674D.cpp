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
     ll n;cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     for (int i = n-1; i>0; i-=2)
     {
         if(arr[i-1]>arr[i]){
             swap(arr[i-1],arr[i]);
         }
     }
     (is_sorted(all(arr)))?cout<<"YES\n":cout<<"NO\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}