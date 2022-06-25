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
     vector<ll>r;
     ll ans = 0;
     ll res = 0;
     for (int i = 0; i <n-1; i++)
     {
       if(arr[i]==0&&arr[i+1]!=0) res++;
     }
     if(arr[0]) res++;
     if(res>=3) res = 2;

    cout<<res<<endl;
     
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