#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n,k;
     cin>>n>>k;
     vector<int>arr(n);
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     priority_queue<int,vector<int>,greater<int>>q;
     for (int i = 0; i <k; i++)
     {
         q.push(arr[i]);
     }
     cout<<q.top()<<endl;
     for (int i = k; i < n; i++)
     {
         if(q.top()<arr[i]){
             q.pop();
             q.push(arr[i]);
         }
         cout<<q.top()<<endl;
     }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}