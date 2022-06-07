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
     ll n;cin>>n;
     vector<ll>a(n),b(n);
     loop(i,0,n){
         cin>>a[i];
     }
     loop(i,0,n)cin>>b[i];
     ll last = -1;
     for (int i = 0; i <n; i++)
     {
         if(b[i]>a[i]){
             cout<<b[i]-a[i]<<" ";
             while(i<n-1 && a[i+1]<b[i]){
                 cout<<b[i+1]- b[i]<<" ";
                 i++;
             }
         }

     }
     cout<<endl;
     

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