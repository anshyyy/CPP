#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
void solve(){ 
   ll n;
   cin>>n;
  if(n&(n-1))cout<<"YES\n";
   else cout<<"NO\n";  
}
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}