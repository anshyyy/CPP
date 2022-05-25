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
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     sort(all(arr));
     vector<ll>ans(n);
     ll x = 0;
     ll y= 1;
     ll i =0,j=n/2;
     while(i<n/2 && j<n){
         ans[x]=arr[i];
         ans[y]=arr[j];
         i++;
         j++;
         x+=2;
         y+=2;
     }
     if(n%2)ans[n-1]=arr[n-1];
    
     for (int i = 1; i < n-1; i++)
     {
         if((ans[i]>ans[i+1] && ans[i]>ans[i-1])
         || ans[i]<ans[i+1] && ans[i]<ans[i-1] ){

         }
         else{
             cout<<"NO\n";
             return;
         }
     }
     cout<<"YES\n";
      loop(i,0,n)cout<<ans[i]<<" ";
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