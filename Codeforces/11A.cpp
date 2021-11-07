#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,d,count=0;
     cin>>n>>d;
     ll arr[n];
     loop(i,0,n)cin>>arr[i];
     for(int i =0;i<n-1;i++){
         if(arr[i]>=arr[i+1]){
             int p = (arr[i]-arr[i+1])/d+1;
             count+=p;
             arr[i+1]+=p*d;
         }
     }
     cout<<count<<"\n";
}
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}