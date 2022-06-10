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
     ll a,b;cin>>a>>b;
     ll x = __gcd(a,b);
     ll a1=a/__gcd(a,b);
     ll b1=b/__gcd(a,b) ;
    if((int)abs(a1-b1)==1)
        cout << "Equal\n" ;
    else if (a>b)
        cout << "Masha\n" ;
    else
        cout << "Dasha\n" ;
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