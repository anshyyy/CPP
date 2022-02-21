#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,k;
     cin>>n>>k;
     if(n%3==0){
         loop(i,0,3)cout<<n/3<<" ";
         cout<<endl;
     }
     else if(n%2){
         cout<<1<<" "<<n/2<<" "<<n/2<<endl;
     }
     else{
        //  cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
        if(n%4!=0)
           cout<<n/2-1<<" "<<n/2-1<<" "<<2<<endl;
        else 
           cout<<n/4<<" "<<n/2<<" "<<n/2<<endl;
     }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}