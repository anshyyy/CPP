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
     int n,m;cin>>n>>m;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     vector<int>pos(n,0);
     loop(i,0,m){
       int x;cin>>x;
       pos[x-1]=1;
     }
     while(true){
          bool ok = false;
          for (int i = 0; i <n; ++i)
          {
              if(pos[i]&&arr[i]>arr[i+1]){
                  ok = true;
                  swap(arr[i],arr[i+1]);
              }
          }
          if(!ok)break;
     }
     is_sorted(all(arr))?cout<<"YES\n":cout<<"NO\n";
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