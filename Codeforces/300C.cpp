#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
#define mod 1000000007
int fact[100000001];

using namespace std;

void factorial()
{
    fact[0]=1;
    for(int i=1;i<=1e6;i++)
    {
        fact[i]=fact[i-1]*i;
        fact[i]%=mod;
    }
}

bool chk(int sum,int a,int b){
     for(int i=sum;i>0;i/=10){
          int r=i%10;
          if(r!=a&&r!=b) return 0;
     }
     return 1;
}
ll power(ll base,ll n){
     ll ans=1;
     while(n){
          if(n%2) ans=(ans*base)%mod;

          base=(base*base)%mod;
          n>>=1;
     }
     return ans;
}
ll inverse(ll n){
     return power(n,mod-2);
}
ll nCr(ll n,ll r){
     ll num=fact[n];
     ll denm=(fact[r]*fact[n-r])%mod;
     ll num1=inverse(denm);
     return (num1*num)%mod;
}

void solve(){ 
     int a,b,n;
     std::cin>>a>>b>>n;
     factorial();
     int ans=0;
     for (int i = 0; i <=n; i++)
     {
          int sum=a*i+(n-i)*b;
          if(chk(sum,a,b)==1){
               ans+=nCr(n,i);
               ans%=mod;
          }
     }
    std::cout<<ans;
     
}
int32_t main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}