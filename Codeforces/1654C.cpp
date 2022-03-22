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
     ll n;
     cin>>n;
     vector<ll>arr(n);
     priority_queue<ll> pq;
     ll sum = 0;
     loop(i,0,n){
       cin>>arr[i];
       sum+=arr[i];
     }
     multiset<ll>ms(all(arr));
     pq.push(sum);
     for (int i = 0; i < 2*n-1; i++)
     {
         ll in_pq = pq.top();pq.pop();
         if(ms.find(in_pq)!=ms.end()){
            ms.erase(ms.find(in_pq));
         }
         else{
             pq.push(in_pq/2+in_pq%2);
             pq.push(in_pq/2);
         }
     }
     if(pq.empty()) cout<<"YES\n";
     else cout<<"NO\n";
     
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}