#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long int ll;
using namespace std;
void solve(){ 
     vector<bool> prime(10000000,true);
     prime[0]=prime[1]=false;
     for (ll i = 2; i*i <=10000000; i++)
     {
         if(prime[i]==true){
             for (ll j = i*i; j <=10000000; j+=i)
             {
                  prime[j]=false;
             }
             
         }
     }
     ll n,t;
     cin>>n;
     ll x;
     
     for (int i = 0; i <n; i++)
     {
         cin>>x;
         t=sqrt(x);
         if(t==sqrt(x)&&prime[t]==true) cout<<"YES\n";
         else cout<<"NO\n";
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