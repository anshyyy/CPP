#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     ll n = s.size();
     ll x = stoi(s);
     if(x%2==0){
         cout<<"0\n";
         return;
     }
     if(x%2!=0&&n==1){
         cout<<"-1\n";
         return;
     }
     ll a = int(s[0]);
     if(a%2==0){
         cout<<1<<endl;
         return;
     }
     for (int i = 1; i <n; i++)
     {
         ll y = ll(s[i]-'0');
        // cout<<y<<endl;
         if(y%2==0){
             cout<<"2\n";
             return;
         }
         }
         cout<<"-1\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}