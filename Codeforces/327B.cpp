#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
vector<int>prime(1000);
void sieve(int n){
    vector<bool> isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;
    for (int i = 2; i*i <=n; i++)
    {
        if(isPrime[i]){
            for (int j = i*i; j <=n; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    int j=0;
    for (int i = 0; i <=n; i++)
    {
        if(isPrime[i]){
           // cout<<i<<" ";
         prime[j++]=i;
        }
    }
    
}

void solve(){ 
     ll n;
     cin>>n;
   
    sieve(10000);
    loop(i,n)cout<<prime[i]<<" ";
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}