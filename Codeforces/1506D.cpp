#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     if((n&(n-1))==0){
         cout<<0<<endl;
         return;
     }
     vector<ll> arr;
     for (ll i = 1; i <=64; i++)
     {
         ll c=(1LL<<i);
         arr.push_back(c);
     }
   //  loop(i,arr.size()) cout<<arr[i]<<" ";
   string s= to_string(n);
   ll ans=1e9;
   ll a=s.size();
   for (auto x:arr)
   {
       string t=to_string(x);
       ll b=t.size();
       ll res=0,i=0,j=0;
       while(i<a&&j<b){
           if(s[i]==t[j]){
               i++;
               j++;
           }
           else{
               res++;
               i++;
           }
       }
       if(i==a&&j!=b)res+=b-j;
       else if(i!=a&&j==b) res+=a-i;

       ans=min(ans,res);
   }
   cout<<ans<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}