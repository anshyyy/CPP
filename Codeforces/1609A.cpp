#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n ;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     sort(arr.begin(),arr.end());
     for (int i = 0; i < n-1; i++)
     {
         if(arr[i]%2==0){
             int x = arr[i];
             while(x>1){
                 x=x/2;
                 arr[i]=x;
                 arr[n-1]=arr[n-1]*2;
             }
         }
     }
    //  for(int x:arr)cout<<x<<" ";
    //  cout<<endl;
     ll sum = accumulate(arr.begin(),arr.end(),0LL);
     cout<<sum<<endl;
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}