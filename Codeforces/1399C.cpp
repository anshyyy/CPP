#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n,ans=0;
     cin>>n;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     sort(arr.begin(),arr.end());
     for (ll k = 1; k < 101; k++)
     {
         int i =0,j=n-1,count=0;
         while(i<j){
             if(arr[i]+arr[j]==k){
                 i++,j--;
                 count++;
             }
             else if (arr[i]+arr[j]<k) i++;
             else j--;
         }
        ans = max(ans,count);
     }
     cout<<ans<<endl;
     
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