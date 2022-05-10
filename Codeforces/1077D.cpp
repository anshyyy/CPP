#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
int mp[200005];
void solve(){ 
     int n,k;cin>>n>>k;
     priority_queue<pair<int,int>>pq;
     for (int i = 0; i <n; i++)
     {
         int x;cin>>x;
         mp[x]++;
     }
     for(int i=1;i<=2e5;i++){
         if(mp[i]==0)continue;
         pq.push({mp[i],i});
       //  cout<<mp[i]<<" "<<i<<endl;
         for (int j = 2; j <=mp[i]; j++)
         {
         //    cout<<mp[i]/j<<" "<<i<<endl;
            pq.push({mp[i]/j,i});
         }
     }
     while(!pq.empty()){
         cout<<pq.top().ff<<" "<<pq.top().ss<<endl;
         pq.pop();
     }
}
int main() {
IOS;
int t=1;
while(t--){
 solve(); 
}
     return 0;
}