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
     ll n,q;cin>>n>>q;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     ll sum =0;
     for (int i = 0; i < n; i++)
     {
         ll next = (i==n-1)?0:arr[i+1];
         sum+= max(arr[i]-next,0LL);
        // cout<<arr[i]<<" "<<next<<" "<<sum<<endl;
     }
     cout<<sum<<endl;
     
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