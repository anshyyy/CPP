#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n,ans1=0,ans2=0;
     cin>>n;
     vector<pair<int,int>>a(n),b(n);
     loop(i,0,n)cin>>a[i].first,a[i].second=i;
     loop(i,0,n)cin>>b[i].first,b[i].second=i;
     if(a[0]<b[0]){
         cout<<"0\n";
         return;
     }
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     int ans = INT_MAX;
     vector<int>mini(n);
     mini[n-1]=b[n-1].second;
     for(int i=n-2;i>=0;i--){
         mini[i]=min(mini[i+1],b[i].second);
     }
     for (int i = 0; i < n; i++)
     {
         ans=min(ans,a[i].second+mini[i]);
     }
     cout<<ans<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}