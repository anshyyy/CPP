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
    
     if(is_sorted(all(arr))){
          cout<<"0\n";
          return;
     }
      if(arr[n-1]<0||arr[n-2]>arr[n-1]){cout<<"-1\n";return;}
     cout<<n-2<<endl;
     for (int i = 1; i <n-1; i++)
     {
          cout<<i<<" "<<n-1<<" "<<n<<endl;
     }
     
     
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