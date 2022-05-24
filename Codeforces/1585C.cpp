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
     ll n,k;
     cin>>n>>k;
     ll ans =0;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     sort(all(arr));
     for (int i = 0; i <n; i+=k)
     {
         if(arr[i]<0) ans -=arr[i];
     }
     for (int i = n-1; i >=0; i-=k)
     {
         if(arr[i]>0) ans+= arr[i];
     }
     cout<<2*ans - max(abs(arr[0]),arr[n-1])<<endl;
     
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