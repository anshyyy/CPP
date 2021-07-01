#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
vector<int> primes;
void sieve(int n){
    vector<bool> isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;
    for (int i = 2; i*i<=n; i++)
    {
        if(isPrime[i]){
            for (int j = i*i; j<=n; j+=i)
            {
                isPrime[j]=false;
            } 
        }
    }
    for (int i = 0; i <=n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }   
    }
}
void solve(){ 
     int n;
     cin>>n;
     sieve(n);
     int ans=0;
     for (int i = 6; i <=n; i++)
     {
         int cnt=0;
         for (int j = 0; j <primes.size(); j++)
         {
             if(primes[j]>i) break;
             if(i%primes[j]==0) cnt++;
             if(cnt>2) break;
         }
         if(cnt==2) ans++;
         
     }
     cout<<ans<<endl;
     
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}