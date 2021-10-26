#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n,x;
     cin>>n>>x;
     vector<int>a(n+1),b(n+1);
     loop(i,1,n+1)cin>>a[i];
     b=a;
     sort(b.begin()+1,b.end());
     for(int i =n-x+1;i<=x;i++){
         if(a[i]!=b[i]){
             cout<<"NO\n";
             return;
         }
     }
     cout<<"YES\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}