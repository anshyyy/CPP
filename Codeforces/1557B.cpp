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
      int n,k;
     cin>>n>>k;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     vector<pair<int,int>>pp(n);
     loop(i,0,n){
         pp[i].ff = arr[i];
         pp[i].ss = i;
     }
     sort(all(pp));
     int cnt = 1;
     for (int i = 1; i < n; i++)
     {
        if(pp[i].ss==pp[i-1].ss+1)continue;
        else cnt++; 
     }
    cnt>k?cout<<"NO\n":cout<<"YES\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}