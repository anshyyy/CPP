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
     int n ,l, r;
     cin>>n>>l>>r;
     ll mini = 0;
     for(int i = 0;i<l;i++){
         mini += pow(2,i);
     }
     mini += n-l;
     ll maxi = 0;
     ll x=0;
     for(int i = 0;i<r;i++){
          x = pow(2,i);
         maxi +=x;
     }
     maxi+=x*(n-r);
     cout<<mini<<" "<<maxi<<endl;
}
int main() {
int t=1;
while(t--){
 solve(); 
}
     return 0;
}