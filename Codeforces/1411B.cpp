#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     ll k=n;
     while(k>0){
         ll x=k%10;
         k= k/10;
         if(x>0&&n%x!=0){
            n++;
            k=n;
         }
     }
     cout<<n<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}