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
ll num(int n){
    ll cnt = 0;
    while(n!=0){
        cnt++;
        n/=10;
    }
    return cnt;
}
void solve(){ 
     ll n;
     cin>>n;
     if(n==1){
        cout<<"0\n";
        return;
     }if(n==2){
        cout<<1<<endl;
        return;
     }
     ll req = num(n);
     //cout<<req<<endl;
     req = pow(10LL,req-1);
     //cout<<req<<endl;
     cout<<n-req<<endl;

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