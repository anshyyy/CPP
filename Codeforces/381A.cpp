#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int>a(n+2);
     loop(i,1,n+1)cin>>a[i];
     int l=1,r=n,sum1=0,sum2=0;
     int i=1;
     while(l<=r){
         if(i%2){
             if(a[l]>=a[r]){
                 sum1+=a[l++];
             }
             else{
                 sum1+=a[r--];
             }
         }
         else{
             if(a[l]>=a[r])
              sum2+=a[l++];
             else
               sum2+=a[r--];
         }
         i++;
     }
     cout<<sum1<<" "<<sum2<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}