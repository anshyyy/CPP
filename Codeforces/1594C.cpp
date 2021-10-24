#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     char c;
     cin>>n>>c;
     string s;
     cin>>s;
     bool flag = true;
     loop(i,0,n){
         if(s[i]!=c){
             flag=false;
             break;
         }
     }
     if(flag){
         cout<<"0\n";
         return;
     }
     for (int i = n/2; i <n; i++)
     {
         if(s[i]==c){
             cout<<1<<endl<<i+1<<endl;
             return;
         }
     }
     cout<<2<<endl<<n-1<<" "<<n<<endl;
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}