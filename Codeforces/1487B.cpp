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
     ll n,k;cin>>n>>k;
     vector<ll>a(n+1);
     for (ll i = n; i>0; i--)
     {
         a[n-i+1]=i;
     }
     ll prev = 0;
     vector<ll>b(n+1,0);
     ll dz = 0;

     for (int i = 1; i <= n; i++)
     {
         if(a[i]==i){
             dz++;
           //  cout<<a[i]<<" "<<i<<" "<<prev<<endl;
             b[i]=i+1;
         }
         else{
            ll x = i+dz;
            b[i]=x;
         }
     }
     
     if(n%2)b[n]=2;
     if(k>n){
        cout<<( n%2==0?((k-1)%(n)+1):((k-1)+(k-1)/(n/2))%(n)+1)<< endl;
        return;
     }
     cout<<b[k]<<endl;
   
     
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