#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<pair<int,int>>arr(n);
     map<int,int>m;
     for(int i=0;i<n;i++){
         cin>>arr[i].first>>arr[i].second;
         m[arr[i].first]++;
     }
     for (int i = 0; i <n; i++)
     {
         cout<<(n-1)+m[arr[i].second]<<" "<<2*(n-1)-((n-1)+m[arr[i].second])<<endl;
     }
     
}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}