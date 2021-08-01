#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long int ll;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
   if(n%2==0){
       cout<<n/2<<" "<<n/2<<endl;
   }
   else{
       for (int i = 2; i*i <=n; i++)
       {
           if(n%i==0){
               cout<<(n/i)<<" "<<n-(n/i)<<endl;
               return;
           }
       }
       cout<<1<<" "<<n-1<<endl;
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