#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int x,y;
     cin>>x>>y;
     if((x+y)%2!=0){
         cout<<"-1 -1\n";
         return;
     }
     if(x==0&&y==0){
         cout<<"0 0\n";
         return;
     }
     cout<<(x+1)/2<<" "<<y/2<<endl;
    
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}