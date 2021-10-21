#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr(n+1);
     loop(i,1,n+1)cin>>arr[i];
     ll sum1=0,sum3=0;
     ll id =0;
     int i=0,j=n+1;
     while(i<j){
         if(sum1>sum3){
             sum3+=arr[++i];
         }
         else if (sum1<sum3)
         {
             sum1+=arr[--j];
         }
         else{
             id=i;
             sum1+=arr[--j];
             sum3+=arr[++i];
         }
     }
     cout<<accumulate(arr.begin()+1,arr.begin()+id+1,0LL)<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}