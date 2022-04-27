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
     vector<int>arr(n),b(n);
     loop(i,0,n)cin>>arr[i];
     int sum = accumulate(all(arr),0);
     b[0]=arr[0];
     for (int i = 1; i < n; i++)
     {
         b[i] = k-b[i-1];
         if(arr[i]>b[i]) b[i]=arr[i];
     }
     int req = accumulate(all(b),0);
     req = req - sum;
     cout<<req<<endl;
     loop(i,0,n)cout<<b[i]<<" ";
     cout<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}