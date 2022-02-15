#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     int k = 1,i,j;
     for(i = 0;i<n;i++){
         if(arr[i]!=k) break;
         k++;
     }
     if(k==n+1){
         loop(i,0,n)cout<<arr[i]<<" ";
         cout<<endl;
         return;
     }
     for(j = n-1;j>=0;j--){
         if(arr[j]==k) break;
     }
     cout<<i<<" "<<j<<endl;
     for(int k = 0;k<i;k++) cout<<arr[k]<<" ";
     for(int k = j;k>=i;k--) cout<<arr[k]<<" ";
     for(int k = j+1;k<n;k++)cout<<arr[k]<<" ";
     cout<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}