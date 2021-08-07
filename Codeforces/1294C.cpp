#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
   set<int>used;
   for (int i = 2; i <=sqrt(n); i++)
   {
       if(n%i==0&&!used.count(i)){
        used.insert(i);
        n/=i;
        break;
       }
   }
   for (int i = 2; i <=sqrt(n); i++)
   {
       if(n%i==0&&!used.count(i)){
        used.insert(i);
        n/=i;
        break;
       }
   }
   if(int(used.size())<2||used.count(n)||n==1){
       cout<<"NO\n";
   }
   else{
       cout<<"YES\n";
       used.insert(n);
       for(auto i : used) cout<<i<<" ";
       cout<<endl;

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