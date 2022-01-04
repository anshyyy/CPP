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
     vector<int>arr(n);
     set<int>s;
     loop(i,0,n){
         cin>>arr[i];
         int y = abs(arr[i]);
         arr[i]=-y;
         if(s.count(y)) s.insert(arr[i]);
         else s.insert(y);
     }
     cout<<s.size()<<endl;
    
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}