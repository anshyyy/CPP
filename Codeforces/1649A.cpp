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
     int cnt = 0;
     int ans = 0;
     vector<int>arr(n),z;
     loop(i,0,n)cin>>arr[i];
     int x = 1,y=0;
     for (int i = 1; i < n; i++)
     {
         if(arr[i]==0){
             y = i-1;
             break;
         }
     }
     for (int i = n-1; i > 0; i--)
     {
         if(arr[i]==0) {
             x = i+1;
             break;
         }
     }
     if(x==1){
         cnt = 0;
     }
     else {
         cnt = x - y;
     }
     cout<<cnt<<endl;
     
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}